#include <stdio.h>

int main() {
float s, i, j;
    for (i = 1, j = 1; i <= 99; i += 2, j++)
    {
        s += i / j;
    }
    printf("S = %f\n", s);
    return 0;
}