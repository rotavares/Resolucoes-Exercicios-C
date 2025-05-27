#include<stdio.h>

int main() 
{
    int matriz[4][4] = {{15,222,659,214},{741,38,39,313},{323,922,12,282},{339,16,125,392}};
    int linha, coluna;
    int maior = matriz[0][0];
    for (int i = 0; i < 4; i++)
    {
        for (int j = 0; j < 4; j++)
        {
            printf("%d ", matriz[i][j]);
        }
        printf("\n");
    }
    for (int i = 0; i < 4; i++)
    {
        for (int j = 0; j < 4; j++)
        {
            if (maior < matriz[i][j])
            {
                maior = matriz[i][j];
                linha = i;
                coluna = j;
            }
        }
    }
    printf("maior elemento = %d\nlocal = linha:%d coluna:%d\n", maior, linha, coluna);
    return 0;
}