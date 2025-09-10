#include <stdio.h>

struct Pessoa {
	int dia, mes, ano;
	char nome[50];
};

int main() {
	struct Pessoa p[6];
	int i, maiorIdade, menorIdade;

	for (i = 0; i < 6; i++) {
		setbuf(stdin, NULL);
		printf("%d# Nome: ", i + 1);
		fgets(p[i].nome, 50, stdin);
		printf("%d# Data nascimento: ", i + 1);
    scanf("%d%d%d", &p[i].dia, &p[i].mes, &p[i].ano);
	}

  for (i = 0; i < 6; i++) {

    if (i == 0) {
      maiorIdade = i;
      menorIdade = i;
    }

    if (p[menorIdade].ano < p[i].ano) {
     menorIdade = i;
    }
    else if (p[menorIdade].ano == p[i].ano) {

      if (p[menorIdade].mes < p[i].mes) {
        menorIdade = i;
      }
      else if (p[menorIdade].mes == p[i].mes) {
        menorIdade = i;

        if (p[menorIdade].dia < p[i].dia) {
          menorIdade= i;
        }
      }
    }

    if (p[maiorIdade].ano > p[i].ano) {
      maiorIdade = i;
    }
    else if (p[maiorIdade].ano == p[i].ano) {

      if (p[maiorIdade].mes > p[i].mes) {
        maiorIdade = i;
      }
      else if (p[maiorIdade].mes == p[i].mes) {
        maiorIdade = i;

        if (p[maiorIdade].dia > p[i].dia) {
          maiorIdade = i;
        }
      }
    }
  }

  printf("Mais velho: %sMais novo: %s", p[maiorIdade].nome, p[menorIdade].nome);

	return 0;
}
