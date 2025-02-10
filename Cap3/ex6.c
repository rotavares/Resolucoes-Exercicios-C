/* 6) Leia uma velocidade em km/h (quilômetros por hora) e
apresente convertida em m/s (metros por segundo). A fórmula
de conversão é M = K/36, sendo K a velocidade em km/h e M
em m/s. */

#include <stdio.h>

int main() {
    int k;
    float m;
    printf("digite a velocidade em km/h: ");
    scanf("%d", &k);
    m = k / 3.6;
    printf("%.4f m/s", m);
    return 0;
}