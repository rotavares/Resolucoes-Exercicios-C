/* 9) Escreva um programa que leia 10 números e escreva o menor
valor lido e o maior valor lido. */

#include <stdio.h>

int main () {
int num, min, max;
    for (int i = 0; i < 10; i++)
    {
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
    printf("%d\n%d\n", min, max);
    return 0;
}