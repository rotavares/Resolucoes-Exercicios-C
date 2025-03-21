#include <stdio.h>

int main() {
    int n, mul, div;
    scanf("%d", &n);
    mul =  n << 1;
    div = n >> 1;
    printf("%d multiplicado por dois igual a %d\n%d dividido por dois igual a %d", n, mul, n, div);
    return 0;
}