#include <stdio.h>

int main()
{
    int vetor[10];

    for (int i = 0; i < 10; i++)
    {
        scanf("%d", &vetor[i]);
    }

    for (int i = 0; i < 10; i++)
    {
        for (int j = i + 1; j < 10; j++)
        {
            if (vetor[i] == vetor[j])
            {
                printf("%d repete\n", vetor[i]);
            }
        }
    }
    return 0;
}