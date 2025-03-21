#include <stdio.h>

int main() {
    float valor;
    int estado;
    printf("Digite o valor do produto: ");
    scanf("%f", &valor);
    printf("Selecione o estado de destino.\n| 1  | 2  | 3  | 4  |\n| MG | SP | RJ | MS |\n");
    scanf("%d", &estado);
    switch (estado) {
        case 1 : printf("%.2f\n", valor += valor * 0.07); break;
        case 2 : printf("%.2f\n", valor += valor * 0.12); break;
        case 3 : printf("%.2f\n", valor += valor * 0.15); break;
        case 4 : printf("%.2f\n", valor += valor * 0.08); break;
        default : printf("error: selecione um estado valido.\n");
    }
    return 0;
}