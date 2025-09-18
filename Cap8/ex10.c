#include <stdio.h>

struct Atleta {
  char nome[50];
  char esporte[20];
  int idade;
  float altura;
};

int main() {
  
  struct Atleta a[5];
  int i, j;

  for (i = 0; i < 5; i++) {
    setbuf(stdin, NULL);
    printf("%d# Nome: ", i+1);
    fgets(a[i].nome, 50, stdin);
    printf("Esporte: ");
    fgets(a[i].esporte, 20, stdin);
    printf("Idade: ");
    scanf("%d", &a[i].idade);
    printf("Altura: ");
    scanf("%f", &a[i].altura);
  }

  for (i = 0; i < 5; i++) {
    for (j = i; j < 5; j++) {
      if (a[j].idade > a[i].idade) {
        struct Atleta aux = a[i];
        a[i] = a[j];
        a[j] = aux;
      }
    }
  }

  for (i = 0; i < 5; i++) {
    printf("\nNome: %sEsporte: %sIdade: %d\nAltura: %.2f\n", a[i].nome, a[i].esporte, a[i].idade, a[i].altura);
  }
  return 0;
}
