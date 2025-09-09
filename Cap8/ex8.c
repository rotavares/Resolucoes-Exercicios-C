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
		printf("%d#  Insira o nome: ", i + 1);
		fgets(p[i].nome, 50, stdin);
		printf("%d# Dia nascimento: ", i + 1);
		scanf("%d", &p[i].dia);
		printf("%d# Mês nascimento: ", i + 1);
		scanf("%d", &p[i].mes);
		printf("%d# Ano nascimento: ", i + 1);
		scanf("%d", &p[i].ano);
	}
	
	for (i = 0; i < 6; i++) {
		if (i == 0) {
			
		}
	}

	printf("Mais velho: %sMais novo: %s", p[pmenor].nome, p[pmaior].nome);

	return 0;
}
