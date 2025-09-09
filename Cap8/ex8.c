#include <stdio.h>

struct Pessoa {
	int dia, mes, ano;
	char nome[50];
};

int main() {
	struct Pessoa p[2];
	int i, menor, maior, pmenor, pmaior;

	for (i = 0; i < 2; i++) {
		setbuf(stdin, NULL);
		printf("%d#  Insira o nome: ", i + 1);
		fgets(p[i].nome, 50, stdin);
		printf("%d# Dia nascimento: ", i + 1);
		scanf("%d", &p[i].dia);
		printf("%d# Mês nascimento: ", i + 1);
		scanf("%d", &p[i].mes);
		printf("%d# Ano nascimento: ", i + 1);
		scanf("%d", &p[i].ano);
	}
	
	for (i = 0; i < 2; i++) {
		if (i == 0) {
			maior = p[i].ano;
			menor = p[i].ano;
		}

		if (maior < p[i].ano) {
			maior = p[i].ano;
			pmaior = i;
		}
		else if (maior == p[i].ano) {
			if (p[pmaior].mes < p[i].mes) {
				pmaior = i;
			}
			else if (p[pmaior].mes = p[i].mes) {
				if (p[pmaior].dia < p[i].dia) {
					pmaior = i;
				}
			}
		}
	}

	printf("Mais velho: %sMais novo: %s", p[pmenor].nome, p[pmaior].nome);

	return 0;
}
