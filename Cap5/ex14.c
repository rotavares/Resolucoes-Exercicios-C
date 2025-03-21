#include <stdio.h>

int main() {
    int var1 = 0;
    int var2 = 1;
    int var3 = 1;
    int enesimo;
    printf("digite o valor = ");
    scanf("%d", &enesimo);
    for (int i = 0; i < enesimo; i++)
    {
        printf("%d ", var3);
        var3 = var2 + var1;
        var1 = var2;
        var2 = var3;
    }
    return 0;
}
