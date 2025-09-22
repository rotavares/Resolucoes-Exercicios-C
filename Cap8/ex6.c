/* Crie uma estrutura representando um aluno de uma disciplina. Essa estrutura deve conter o número de matrícula do aluno, seu nome e as notas de três provas. Agora, escreva um programa que leia os dados de cinco alunos e os armazene nessa estrutura. Em seguida, exiba o nome e as notas do aluno e os armazene nessa estrutura. Em seguida, exiba o nome e as notas do aluno que possui a maior média geral dentre os cinco. */

#include <stdio.h>
#include <string.h>

#define QUANTIDADE_ALUNOS 5

struct aluno {
  unsigned matricula;
  char nome[32];
  double nota1, nota2, nota3, media;
};

int main() {
  struct aluno a[QUANTIDADE_ALUNOS] = {0};

  unsigned maior_nota = 0;

  for (int i = 0; i < QUANTIDADE_ALUNOS; i++) {
    printf("\nNúmero da matrícula: ");
    scanf("%d", &a[i].matricula);
    setbuf(stdin, NULL);


    printf("Nome do aluno: ");
    fgets(a[i].nome, 32, stdin);


    char len = strlen(a[i].nome);

    if (a[i].nome[len-1] == '\n') {
      a[i].nome[len-1] = '\0';
    } else {
      setbuf(stdin, NULL);
    }

    printf("Nota da prova 1: ");
    scanf("%lf", &a[i].nota1);
    setbuf(stdin, NULL);


    printf("Nota da prova 2: ");
    scanf("%lf", &a[i].nota2);
    setbuf(stdin, NULL);

    printf("Nota da prova 3: ");
    scanf("%lf", &a[i].nota3);
    setbuf(stdin, NULL);

    a[i].media = (a[i].nota1 + a[i].nota2 + a[i].nota3) / 3;
  }

  for (int i = 0; i < QUANTIDADE_ALUNOS; i++) {
    if (a[i].media > a[maior_nota].media) {
      maior_nota = i;
    }
  }

  printf("\nAluno com a maior média\n");
  printf("Nome: %s\n", a[maior_nota].nome);
  printf("Matrícula: %u\n", a[maior_nota].matricula);
  printf("Prova 1: %.2f\n", a[maior_nota].nota1);
  printf("Prova 2: %.2f\n", a[maior_nota].nota2);
  printf("Prova 3: %.2f\n", a[maior_nota].nota3);
  printf("Média: %.2f\n", a[maior_nota].media);

  return 0;
}
