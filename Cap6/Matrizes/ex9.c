#include <stdio.h>

int main() 
{
    int vetor[3], matriz[3][3];
    for (int i = 0; i < 3; i++)
    {
        for (int j = 0; j < 3; j++)
        {
            printf("%d# valor:", j);
            scanf("%d", &matriz[i][j]);
        }
        printf("\n");
    }
    for (int i = 0; i < 3; i++)
    {   
        for (int j = 0; j < 3; j++)
        {
            if (j == 0)
            {
                vetor[j] += matriz[i][j];
            }
            if (j == 1)
            {
                vetor[j] += matriz[i][j];
            }
            if (j == 2)
            {
                vetor[j] += matriz[i][j];
            }
        }
    }
    for (int i = 0; i < 3; i++)
    {
        printf("%d ", vetor[i]);
    }
    printf("\n");
    return 0;
}