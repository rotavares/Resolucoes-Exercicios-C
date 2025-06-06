#include <stdio.h>

int main() 
{
    int soma = 0;
    int matriz[5][5] = {{45,78,41,52,35},{51,59,24,26,27},{17,24,19,26,81},{34,39,83,67,55},{52,41,53,61,43}};
    for (int i = 0; i < 5; i++)
    {
        for (int j = 0; j < 5; j++)
        {
            if (i > j)
            {
                soma += matriz[i][j];
            }
        }
    }
    for (int i = 0; i < 5; i++)
    {
        for (int j = 0; j < 5; j++)
        {
            printf("%d ", matriz[i][j]);
        }
        printf("\n");
    }
    printf("soma elementos acima da diagonal principal = %d\n", soma);
    return 0;
}