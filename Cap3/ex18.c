#include <stdio.h>

int main () {
    int n1, n2;
    scanf("%d\n%d", &n1, &n2);
    printf("\n%d", n1 << n2);
    printf("\n%d", n1 >> n2);
    return 0;
}