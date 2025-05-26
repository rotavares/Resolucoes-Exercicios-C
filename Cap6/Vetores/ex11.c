#include <stdio.h>

int main() {
    float conjuntoNumeros[20], conjuntoQuadrados[20];
    int quantidadeNumeros;

    do
    {
        printf("Digite a quantidade de numeros (maximo 20): ");
        scanf("%d", &quantidadeNumeros);
    } while (quantidadeNumeros < 1 || quantidadeNumeros > 20);
    
    
    for (int i = 0; i < quantidadeNumeros; i++)
    {
        printf("numero %d: ", i+1);
        scanf("%f", &conjuntoNumeros[i]);
        conjuntoQuadrados[i] = conjuntoNumeros[i] * conjuntoNumeros[i];
    }
    
    printf("Primeiro conjunto:\n");
    for (int i = 0; i < quantidadeNumeros; i++)
    {
        printf("%.2f ", conjuntoNumeros[i]);
    }
    printf("\nSegundo conjunto:\n");
    for (int i = 0; i < quantidadeNumeros; i++)
    {
        printf("%.2f ", conjuntoQuadrados[i]);
    }

    return 0;
}