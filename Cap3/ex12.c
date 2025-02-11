/* 12) Leia a altura e o raio de um cilindro circular e imprima o
volume desse cilindro. O volume de um cilindro circular é
calculado por meio da seguinte fórmula:  V = π* raio2*altura, em que π = 3.141592 */

#include <stdio.h>
#define PI 3.141592

int main() {
    float r, a, v;
    r = 30;
    a = 100;
    v = PI*(r*r)*a;
    printf("%f", v);
} 