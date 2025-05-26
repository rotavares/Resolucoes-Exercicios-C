#include <stdio.h>

int main() {
    int media, soma = 0, vetor[5];
    for (int i = 0; i < 5; i++)
    {
        scanf("%d", &vetor[i]);
    }
    printf("valores lidos = ");
    for (int i = 0; i < 5; i++)
    {
        printf("%d ", vetor[i]);
    }

    for (size_t i = 0; i < 5; i++)
    {
        soma += vetor[i];
    }
    media = soma / 5;
    printf("\nmedia = %d", media);
    return 0;
}