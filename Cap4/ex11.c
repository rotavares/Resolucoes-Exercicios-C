/* 11) Faça um programa que informe o mês de acordo com o
número digitado pelo usuário. Exemplo: Entrada = 4.
Saída = Abril. */

#include <stdio.h>

int main() {
    int numero;

    printf("Digite um numero de 1 a 12 para exibir o mes: ");
    scanf("%d", &numero);
    switch (numero)
    {
    case 1:
        printf("Janeiro\n");
        break;
    case 2:
        printf("Fevereiro\n");
        break;
    case 3:
        printf("Marco\n");
        break;
    case 4:
        printf("Abril\n");
        break;
    case 5:
        printf("Maio\n");
        break;
    case 6:
        printf("Junho\n");
        break;
    case 7:
        printf("Julho\n");
        break;
    case 8:
        printf("Agosto\n");
        break;
    case 9:
        printf("Setembro\n");
        break;
    case 10:
        printf("Outubro\n");
        break;
    case 11:
        printf("Novembro\n");
        break;
    case 12:
        printf("Dezembro\n");
        break; 
    default: printf("erro: Digite um numero valido! 1 a 12\n");
        break;
    }
}