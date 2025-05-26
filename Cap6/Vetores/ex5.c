#include <stdio.h>

int main() {
    int x, y, soma, vetor[8];

    for (int i = 0; i < 8; i++)
    {
        printf("%d# posicao: ", i);
        scanf("%d", &vetor[i]);
    }
    
    printf("digite dois valores para soma correspondentes ao vetor de oito posicoes\n");
    do
    {
        printf("valor de x = ");
        scanf("%d", &x);
        printf("valor de y = ");
        scanf("%d", &y);
    } while (x > 8 || y > 8 || x < 0 || y < 0);

    soma = vetor[x] + vetor [y];
    printf("soma das posicoes %d e %d (%d + %d) = %d\n", x, y, vetor[x], vetor[y], soma);
    return 0 ; 
}