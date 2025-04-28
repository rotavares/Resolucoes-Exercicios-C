#include <stdio.h>

int main () {
    int contagemPares = 0, vetor[10];
    for (int i = 0; i < 10; i++)
    {
        printf("%d# valor: ", i);
        scanf("%d", &vetor[i]);
    }
    for (int i = 0; i < 10; i++)
    {
        if (vetor[i] % 2 == 0)
        {
            contagemPares++;
        }
        
    }
    
    printf("%d pares armazenados\n", contagemPares);

    return 0;
}