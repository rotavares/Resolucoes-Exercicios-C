/* 7) Uma empresa vende o mesmo produto para quatro diferentes
estados. Cada estado possui uma taxa diferente de imposto
sobre o produto. Faça um programa em que o usuário entre
com o valor e o estado de destino do produto e o programa
retorne o preço final do produto acrescido do imposto do
estado em que ele será vendido. Se o estado digitado não for
válido, mostrará uma mensagem de erro. 

Estado      MG      SP      RJ      MS
Imposto     7%      12%     15%     8%

*/

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