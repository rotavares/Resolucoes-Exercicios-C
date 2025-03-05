/* Faça um programa que leia os coeficientes de uma equação
do segundo grau. Em seguida, calcule e mostre as raízes dessa
equação, lembrando que as raízes são calculadas como

                        -b±√∆
                    x = ------
                         2*a

em que ∆ = b2 – 4 * a * c e ax² + bx + c = 0
representa uma equação do segundo grau. A
variável  a  tem de ser diferente de zero. Caso
seja igual, imprima a mensagem “Não é
equação de segundo grau”. Do contrário,
imprima:

• Se ∆ < 0, não existe real. Imprima a
mensagem “Não existe raiz”.
• Se ∆ = 0, existe uma raiz real. Imprima a
raiz e a mensagem “Raiz única”.
• Se ∆ > 0, existem duas raízes reais.
Imprima as raízes. */

#include <stdio.h>
#include <math.h>

int main () {
    float a, b, c, delta, x1, x2;
    printf("Digite os coeficientes: ");
    scanf("%f%f%f", &a, &b, &c);
    if (a == 0)
    {
        printf("Nao e equacao de segundo grau\n");
        return 0;
    }
    delta = pow(b, 2) - 4 * a * c;
    if (delta < 0)
    {
        printf("Nao existe raiz\n");
        return 0;
    }
    if (delta == 0)
    {
        x1 = - b / (2 * a);
        printf("%f, Raiz unica\n", x1);
        return 0;
    }
    x1 = (- b + sqrt(delta)) / (2 * a);
    x2 = (- b - sqrt(delta)) / (2 * a);
    printf("x1 = %f\n", x1);
    printf("x2 = %f\n", x2);
    return 0;
}