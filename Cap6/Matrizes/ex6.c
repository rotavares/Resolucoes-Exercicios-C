#include <stdio.h>

int main()
{
    int soma = 0, matriz[3][3] = {{1, 2, 3}, {4, 5, 6}, {7, 8, 9}};
    for (int i = 0; i < 3; i++)
    {
        for (int j = 0; j < 3; j++)
        {
            if (i == j)
            {
                soma+=matriz[i][j];
            }
        }
    }
    printf("Soma = %d", soma);
    return 0;
}