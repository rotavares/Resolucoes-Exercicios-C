/* 12) Escreva um programa que leia um número inteiro e calcule a
soma de todos os divisores desse número, com exceção dele
próprio. Exemplo: A soma dos divisores do número 66 é 1 + 2
+ 3 + 6 + 11 + 22 + 33 = 78. */

#include <stdio.h>

int main() {
    int num, soma = 0;
    scanf("%d", &num);
    for (int i = 1; i <= num; i++)
    {
        if (num % i == 0)
        {
            soma += i;
        }
    }
        soma = soma - num;
     printf("soma dos divisores = %d", soma);
}