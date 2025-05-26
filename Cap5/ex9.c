#include <stdio.h>

int main () {
int num, min, max;
    for (int i = 0; i < 10; i++)
    {
        printf("%d# valor = ", i+1);
        scanf("%d", &num);
        if (i == 0)
        {
            min = num;
            max = num;
            continue;
        }
        if (min > num)
            min = num;
        if (max < num)
            max = num;
    }
    printf("menor = %d\nmaior = %d\n", min, max);
    return 0;
}