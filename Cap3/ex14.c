#include <stdio.h>
// código ASCII de "A" = 65 | código ASCII de "a" = 97
int main() {
    unsigned char letra;
    scanf("%c", &letra);
    printf("%c", letra + 32);
    return 0;
}