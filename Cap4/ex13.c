/* 13) Faça um programa que mostre ao usuário um menu com
quatro opções de operações matemáticas (as operações básicas,
por exemplo). O usuário escolhe uma das opções, e o seu
programa pede dois valores numéricos e realiza a operação,
mostrando o resultado. */

#include <stdio.h>

int main()
{
    float num1, num2, adicao, subtracao, multiplicacao, divisao;
    char escolha;
    printf("Escolha a operacao que deseja:\n[A]dicao\t[S]ubtracao\t[M]ultiplicacao\t[D]ivisao\n");
    escolha = getchar();
    printf("Insira dois valores\n");
    scanf("%f %f", &num1, &num2);
    if (escolha == 'A' || escolha == 'a')
    {
        adicao = num1 + num2;
        printf("= %f\n", adicao);
    }
    if (escolha == 'S' || escolha == 's')
    {
        subtracao = num1 - num2;
        printf("= %f\n", subtracao);
    }
    if (escolha == 'M' || escolha == 'm')
    {
        multiplicacao = num1 * num2;
        printf("= %f\n", multiplicacao);
    }
    if (escolha == 'D' || escolha == 'd')
    {
        divisao = num1 - num2;
        printf("= %f\n", divisao);
    }
    return 0;
}