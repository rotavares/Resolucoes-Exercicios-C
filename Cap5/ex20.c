#include <stdio.h>

int main() {
    int fatorial, entrada, contagem = 0;
    float e = 0;
    do
    {
        e = 0;
        printf("entrada: ");
        scanf("%d", &entrada);
        for (int i = 0; i < entrada; i++)
        {
            if (contagem < entrada)
            {
                contagem++;
            }
            fatorial = contagem;
            for (int j = 1; j < contagem; j++)
            {
                fatorial *= j;
            }
            e += 1 / (float) fatorial;
        }
        printf("E = %f\n", e);
    } while (entrada > 0);
    return 0;
}