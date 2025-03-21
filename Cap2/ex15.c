#include <stdio.h>

int main() {
    char c = 'R';
    int n = 23;
    float f = 4.52001;
    printf("%c %d %.5f\n", c, n, f);
    printf("%c\t%d\t%.5f\t\n", c, n, f);
    printf("%c\n%d\n%.5f\n", c, n, f);
    return 0;
}