#include <stdio.h>

int main() 
{
    int contagem = 0, matriz[4][4] = {{13,-2,3,},{-23,5,-32,},{-123,-55,12,},{25,4,-6,231}};
    for (int i = 0; i < 4; i++)
    {
        for (int j = 0; j < 4; j++)
        {
            if (matriz[i][j] < 0)
            {
                contagem++;
            }
        }
    }
    printf("a matriz possui %d valores negativos\n", contagem);
    return 0;
}