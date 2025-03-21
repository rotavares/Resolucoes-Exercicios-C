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