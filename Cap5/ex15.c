#include <stdio.h>

int main () {
    int num, min, contador = 0, max = 0;

    while (num > -1)
    {
        contador++;
        printf("%d# valor = ", contador);
        scanf("%d", &num);
        if (num > max)
            max = num;
        else if (num < min && num > -1)
            min = num;
    }
    printf("%d, %d", min, max);
    return 0;
}