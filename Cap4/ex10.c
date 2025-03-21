#include <stdio.h>
#include <math.h>

int main()
{
    float x, y, z, geo, pon, har, ari;
    int valor;

    printf("Digite tres numeros inteiros positivos: ");

    scanf("%f %f %f", &x, &y, &z);

    geo = pow(y * x * z, 1.0 / 3);

    pon = (x + 2 * y + 3 * z) / 6;

    har = 3 / (1 / x + 1 / y + 1 / z);

    ari = (x + y + z) / 3;

    printf("Escolha calculo da media de acordo os numeros:\n1 = Geometrica\n2 = Ponderada\n3 = Harmonica\n4 = Aritmetica\n");
    scanf("%d", &valor);

    if (valor == 1)
    {
        printf("media geometrica = %f\n", geo);
    }
    else if (valor == 2)
    {
        printf("media ponderada = %f\n", pon);
    }
    else if (valor == 3)
    {
        printf("media harmonica = %f\n", har);
    }
    else if (valor == 4)
    {
        printf("media aritmetica = %f\n", ari);
    }
    else
    {
        printf("\nerro: Digite um valor valor valido\n1 = Geometrica\n2 = Ponderada\n3 = Harmonica\n4 = Aritmetica\n");
    }
    return 0;
}
