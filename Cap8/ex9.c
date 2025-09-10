#include <stdio.h>

struct Atleta {
  char nome[50];
  char esporte[20];
  int dia, mes, ano;
  float altura;
};

int main() {
  struct Atleta a[5];
  int i, maisAlto, maisVelho;

  for (i = 0; i < 5; i++) {
    printf("%d#  insira o nome: ", i + 1);
    fgets(a[i].nome, 50, stdin);
    printf("esporte praticado: ");
    fgets(a[i].esporte, 20, stdin);
    printf("nascimento: ");
    scanf("%d%d%d", &a[i].dia, &a[i].mes, &a[i].ano);
    printf("altura: ");
    scanf("%f", &a[i].altura);
    setbuf(stdin, NULL);
  }

  for (i = 0; i < 5; i++) {

    if (i == 0) {
      maisVelho = i;
      maisAlto = i;
    }

    if (a[maisVelho].ano > a[i].ano) {
      maisVelho = i;
    }
    else if (a[maisVelho].ano == a[i].ano) {

      if (a[maisVelho].mes > a[i].mes) {
        maisVelho = i;
      }
      else if (a[maisVelho].mes == a[i].mes) {
        maisVelho = i;

        if (a[maisVelho].dia > a[i].dia) {
          maisVelho = i;
        }
      }
    }

    if (a[maisAlto].altura < a[i].altura) {
      maisAlto = i;
    }

  }
  printf("Mais Velho: %sMais Alto: %s", a[maisVelho].nome, a[maisAlto].nome);
  return 0;
}
