#include <stdio.h>

int main()
{
    int matriz[5][5] = {{4, 7, 1, 2, 5}, {5, 9, 4, 6, 2}, {7, 2, 1, 6, 1}, {4, 9, 3, 7, 5}, {2, 1, 3, 1, 4}};
    int somaDiagonal = 0;
    int soma = 0;
    for (int i = 0; i < 5; i++)
    {
        for (int j = 0; j < 5; j++)
        {
            if (i + j == 4)
            {
                printf(" %d ", matriz[i][j]);
                somaDiagonal += matriz[i][j];
            }
            else
            {
                printf(" * ");
            }
        }
        printf("\n");
    }
    printf("soma diagonal secundaria %d\n", somaDiagonal);
    printf("\n");
    for (int i = 0; i < 5; i++)
    {
        for (int j = 0; j < 5; j++)
        {
            if (i + j == 4 || i == j)
            {
                printf(" * ");
            }
            else
            {
                printf(" %d ", matriz[i][j]);
                soma += matriz[i][j];
            }
        }
        printf("\n");
    }
    printf("soma elementos que não pertecem a nenhuma das duas diagonais = %d\n", soma);
    printf("diferenca entre os dois valores = %d\n", soma - somaDiagonal);
    return 0;
}