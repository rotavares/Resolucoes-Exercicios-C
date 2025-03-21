#include <stdio.h>
#include <math.h>

int main() {
    float a, b, h;
    scanf("%f %f", &a, &b);
    h = (a * a) + (b * b);
    printf("%f", sqrt(h));
    return 0;
} 