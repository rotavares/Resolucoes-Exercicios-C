#include <stdio.h>

int main() {
    int linhas, contador = 1;
    printf("Digite o numero de linhas: ");
    scanf("%d", &linhas);
    for (int i = 1; i <= linhas; i++)
    {
        for (int j = 1; j <= i; j++)
        {
            printf("%d ", contador);
            contador++;
        }
        printf("\n");
    }
    return 0;
}