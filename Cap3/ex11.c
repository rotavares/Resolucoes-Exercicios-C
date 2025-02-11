/* 11) Leia o valor do raio de um círculo. Calcule e imprima a área
do círculo correspondente. A área do círculo é A = π* raio2,
sendo π = 3.141592. */

#include <stdio.h>
#define PI 3.141592
int main() {
    float r, a;
    r = 3;
    a = PI * (r*r);
    printf("%.2f", a);
    return 0;
}