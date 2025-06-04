#include <stdio.h>

int main() 
{
    float vetor[3], matriz[3][10];
    float piorNota;
    for (int i = 0; i < 3; i++)
    {
        for (int j = 0; j < 10; j++)
        {
            printf("%d# nota aluno: ", j+1);
            scanf("%f", &matriz[i][j]);
        }
    }

    for (int i = 0; i < 3; i++)
    {
        piorNota = matriz[i][0];
        for (int j = 0; j < 10; j++)
        {
            if (piorNota > matriz[i][j])
            {
                piorNota = matriz[i][j];
            }       
        }
        printf("Pior nota prova %d: %.2f\n", i+1, piorNota);
    }
    return 0;
}