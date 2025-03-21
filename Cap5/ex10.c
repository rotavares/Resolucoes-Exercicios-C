#include <stdio.h>

int main() {
    float num = 0;
    float soma, media;

    for (int i = 0; i < 10; i++)
    {
        printf("%d# valor = ", i+1);
        scanf("%f", &num);
        if (num < 0)
        {
            i--;
        } else
        {
            soma += num;
        }
    }
    media = soma / 10;
    printf("media = %.2f\n", media);
    return 0;
}