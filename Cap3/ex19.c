#include <stdio.h>

int main() {
    int n1, n2;
    scanf("%d\n%d", &n1, &n2);
    printf("\n%d\n%d\n%d\n", n1 | n2, n1 & n2, n1 ^n2);
    return 0;
}