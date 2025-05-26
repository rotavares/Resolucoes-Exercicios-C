#include <stdio.h>

int main() {
    int num = 66;
    scanf("%d", &num);
    printf("divisores de %d sao: ", num);
    for (int i = 1; i <= num; i++)
    {
        if (num % i == 0)
        {
            printf("%d ", i);
        }
    }
    return 0;
}