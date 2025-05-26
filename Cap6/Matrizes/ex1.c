#include <stdio.h>

int main() 
{
    int matriz[3][3] = {{111,53,92},{21,64,106},{33,27,117}};
    int menor = matriz[0][0];
        for (int i = 0; i < 3; i++)
    {
        for (int j = 0; j < 3; j++)
        {
            if (menor > matriz[i][j])
            {
                menor = matriz[i][j];
            }
        }
    }
    printf("Menor valor da matriz = %d\n", menor);
    for (int i = 0; i < 3; i++)
    {
        for (int j = 0; j < 3; j++)
        {
            printf("%d ", matriz[i][j]);
        }
        printf("\n");
    }
    return 0;
}