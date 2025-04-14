#include <stdio.h>

int main() {
    int quantidade, contagemQuantidade = 0, entrada, contagemEntrada, maior = 0;
    printf("digite a quantidade de numeros a serem lidos: ");
    scanf("%d", &quantidade);
    do
    {
        printf("digite o valor: ");
        scanf("%d", &entrada);

        if (maior == 0)
        {
            maior = entrada;
        }
        
        if (maior < entrada)
        {
            maior = entrada;
            contagemEntrada = 0;
        }

        if (maior == entrada)
        {
            contagemEntrada++;
        }
        contagemQuantidade++;
    } while (contagemQuantidade < quantidade);
    contagemQuantidade = 0;
    printf("maior numero, %d\nfoi lido %d vezes", maior, contagemEntrada);
}