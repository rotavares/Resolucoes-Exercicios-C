#include <stdio.h>

int main() 
{
    int matriz[5][5] = {{4,7,1,2,5},{5,9,4,6,2},{7,2,1,6,1},{4,9,3,7,5},{2,1,3,1,4}};
    int soma = 0;
    for (int i = 0; i < 5; i++)
    {
        for (int j = 0; j < 5; j++)
        {
            if (i + j == 4 | i == j)
            {
                printf("%d ", matriz[i][j]);
            }
            else
            {
                printf("* ");
                soma += matriz[i][j];
            }
        }
        printf("\n");
    }
    printf("soma dos elementos da matriz que nao sao a diagonal principal nem a diagonal secundaria = %d\n", soma);
    return 0;
}