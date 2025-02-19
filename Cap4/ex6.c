/* 6) Faça um programa que receba a altura e o sexo de uma pessoa
e calcule e mostre seu peso ideal, utilizando as seguintes
fórmulas (em que “h” corresponde à altura):
• Homens: (72,7 * h) – 58
• Mulheres: (62,1 * h) – 44,7 */

#include <stdio.h>

int main () {
    float h, pesoIdeal;
    char sexo;
    printf("Digite o sexo da pessoa: ");
    sexo = getchar();
    printf("Digite a altura da pessoa: ");
    scanf("%f", &h);

    if (sexo == 'H' || sexo == 'h'){
        pesoIdeal = (72.7 * h) - 58;
        printf("Peso ideal = %.2f\n", pesoIdeal);
    } else {
        if (sexo == 'M' || sexo == 'm') {
            pesoIdeal = (62.1 * h) - 44.7;
            printf("Peso ideal = %.2f\n", pesoIdeal);
        } else {
            printf("Genero invalido, digite novamente.\n");
        }
    }
    return 0;
}