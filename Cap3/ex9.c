/* 9) Leia um ângulo em graus e apresente-o convertido em
radianos. A fórmula de conversão é R = G * π/180, sendo G o
ângulo em graus e R em radianos e π = 3.141592. */

#include <stdio.h>
#define PI 3.141592

int main() {
    float r;
    int g;
    scanf("%d", &g);
    r = g * PI / 180;
    printf("%d grau = %f radiano", g, r);
    return 0;
}