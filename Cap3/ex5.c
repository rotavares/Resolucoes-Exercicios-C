/* 5) Faça um programa que calcule o ano de nascimento de uma
pessoa a partir de sua idade e do ano atual. */

#include <stdio.h>

int main() {
    int idade;
    int anoAtual = 2025;
    int anoNascimento;

    printf("Digite sua idade\n");
    scanf("%d", &idade);
    anoNascimento = anoAtual - idade;
    printf("Ano de nascimento = %d", anoNascimento);
    return 0;
}