/* 11) Elabore um programa que contenha uma
constante qualquer do tipo float. Use o comando
#define. Imprima essa constante. */

#include <stdio.h>

#define PI 3.14159265359

int main() {
    float n = PI;
    printf("Valor de Pi = %.5lf", n);
    return 0;
}    