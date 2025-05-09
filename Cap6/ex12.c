#include <stdio.h>

int main() {
    int contagem = 0, vetor[10];
 
    for (int i = 0; i < 10; i++)
    {
        scanf("%d", &vetor[i]);
    }
    

    for (int i = 0; i < 10; i++)
    {
        for (int j = 0; j < 10; i++)
        {
            if (vetor[i] == vetor[j]);
            contagem++;
        }
        if (contagem > 2)
        {
            printf("%d ", vetor[i]);
        }
        printf("\n");
        contagem = 0;
    }
    
    return 0;
}