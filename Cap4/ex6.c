/* 6) Faça um programa que receba a altura e o sexo de uma pessoa
e calcule e mostre seu peso ideal, utilizando as seguintes
fórmulas (em que “h” corresponde à altura):
• Homens: (72,7 * h) – 58
• Mulheres: (62,1 * h) – 44,7 */

#include <stdio.h>

int main() {
    float h, pesoIdeal;
    char sexo;
    printf("Digite a altura da pessoa\n");
    scanf("%f", &h);
    printf("Digite o sexo da pessoa (H - M)\n");
    scanf("%c", &sexo);
    if (sexo == 'H' | 'h') {
        pesoIdeal = (72.7 * h) - 58;
    } else {
        if (sexo == 'M' | 'm') {
            pesoIdeal = (62.1 * h) - 44.7;
        } else {
            printf("Digite o sexo da pessoa valido (H - M)\n");
        }
    }
    printf("Peso ideial = %.2f\n", pesoIdeal);
    return 0;
}