#include <stdio.h>

int main() {
    int a;
    scanf("%d", &a);
    if (a % 2 == 0) {
        printf("numero par");
    } else {
        printf("numero impar");
    }
    return 0;
}