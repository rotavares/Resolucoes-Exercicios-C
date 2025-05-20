#include <stdio.h>

int main()
{
    int vetor[10];

    for (int i = 0; i < 10; i++)
    {
        scanf("%d", &vetor[i]);
        for (int j = 0; j < i; j++)
        {
            while (vetor[i] == vetor[j])
            {
                printf("valor repetido, digite novamente.\n");
                scanf("%d", &vetor[i]);
            }
        }
    }
    for (int i = 0; i < 10; i++)
    {
        printf("%d ", vetor[i]);
    }

    return 0;
}