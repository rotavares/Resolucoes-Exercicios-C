#include <stdio.h>

int main() 
{
    float matriz[3][10];
    for (int i = 0; i < 3; i++)
    {
        for (int j = 0; j < 10; j++)
        {
            scanf("%f", &matriz[i][j]);
        }
    }

    for (int i = 0; i < 3; i++)
    {
        for (int j = 0; j < 10; j++)
        {
            printf("%.2f ", matriz[i][j]);
        }
        printf("\n");
    }
    return 0;
}