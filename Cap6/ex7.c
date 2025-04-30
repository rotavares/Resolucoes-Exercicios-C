#include <stdio.h>

int main() {
    int maior, menor, vetor[10];
    for (int i = 0; i < 10; i++)
    {
        scanf("%d", &vetor[i]);
    }
    
    for (int i = 0; i < 10; i++)
    {
        if (i == 0)
        {
            menor = vetor[i];
            maior = vetor[i];
            continue;
        }
        
        
        if (menor > vetor[i])
            menor = vetor[i];
        
        if (maior < vetor[i])
            maior = vetor[i];
        
    }
    
    printf("maior: %d\nmenor: %d", maior, menor);

    return 0;
}