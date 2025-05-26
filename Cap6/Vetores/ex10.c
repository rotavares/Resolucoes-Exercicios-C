#include <stdio.h>

int main() {
    int vetor[100];

    for (int i = 0; i < 100; i++)
    {
        vetor[i] = i+1;
    }
    
    for (int i = 0; i < 100; i++)
    {
        if (vetor[i] % 7 != 0)
        {
            printf("%d ", vetor[i]);
        }
        
    }
    
    return 0;
}