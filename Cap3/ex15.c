/* 15) Faça um programa para ler um número inteiro positivo de
três dígitos. Em seguida, calcule e mostre o número formado
pelos dígitos invertidos do número lido. Exemplo:
Número lido = 123 Número gerado = 321 */

#include <stdio.h>

int main() {
    int unidade, dezena, centena, num;
    scanf("%d", &num);
    unidade = num/1%10;
    dezena = num/10%10;
    centena = num/100%10;
    printf("Numero lido = %d\n", num);
    printf("Numero gerado = %d", unidade);
    printf("%d", dezena);
    printf("%d", centena);
    return 0;
}