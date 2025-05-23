#include <stdio.h>

int main() {
    int quantidadeNegativos = 0, somaPositivos = 0, vetor[10];
    for (int i = 0; i < 10; i++)
    {
        scanf("%d", &vetor[i]);
    }

    for (int i = 0; i < 10; i++)
    {
        if (vetor[i] > 0)
        {
            somaPositivos += vetor[i];
        }

        if (vetor[i] < 0)
        {
            quantidadeNegativos++;
        }
        
    }

    printf("quantidade negativos: %d\nsoma positivos: %d", quantidadeNegativos, somaPositivos);

    return 0;
}