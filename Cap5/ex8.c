#include <stdio.h>

int main() {
    int n, soma = 0;
    for (int i = 1; i <= 10; i++)
    {
        printf("Digite %d# valor = ", i);
        scanf("%d", &n);
        soma += n;
    }
    printf("media = %.2f\n", (float) soma / 10);
    return 0;
}