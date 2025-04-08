#include <stdio.h>
int main() {
    int n, f;

    while (f == f)
    {
        printf("digite um numero inteiro maior do que 1 > ");
        scanf("%d", &n);

        if (n < 1)
        {
            printf("numero menor que 1");
            break;
        }

        int contador = 0;
        
        for (int i = 1; i <= n; i++)
        {
            if (n % i == 0)
            {
                contador++;
            }
            
        }
        
        if (contador == 2)
        {
            printf("%d e numero primo\n", n);
        }
        else
        {
            printf("%d nao e numero primo\n", n);
        }
        
    }
    return 0;
}