#include <stdio.h>

int main() {
    int unidade, dezena, centena, num;
    scanf("%d", &num);
    unidade = num/1%10;
    dezena = num/10%10;
    centena = num/100%10;
    printf("Numero lido = %d\n", num);
    printf("Numero gerado = %d", unidade);
    printf("%d", dezena);
    printf("%d", centena);
    return 0;
}