#include <stdio.h>

int main() 
{
    int contagem = 0, matriz[4][4] = {{1,6,8,9},{10,23,42,},{2,45,7,},{34,32,6,62}};
    for (int i = 0; i < 4; i++)
    {
        for (int j = 0; j < 4; j++)
        {
             if (matriz[i][j] > 10)
             {
                contagem++;
             }
        }
    }
    printf("matriz possui %d valores maiores que 10\n", contagem);
    return 0;
}