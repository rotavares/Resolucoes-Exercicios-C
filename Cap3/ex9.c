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