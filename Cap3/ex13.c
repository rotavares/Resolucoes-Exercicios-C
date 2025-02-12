/* 13) Sejam a e b os catetos de um triângulo cuja hipotenusa h é
obtida pela equação: h = raiz quadrada (a * a)+(b * b);
*/

#include <stdio.h>

int main() {
    float a, b, h;

    scanf("%f %f", &a, &b);
    h = (a * a) + (b * b);
    printf("%f", h);
    return 0;
}

