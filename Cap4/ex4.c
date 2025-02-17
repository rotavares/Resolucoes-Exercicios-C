/* 4) Faça um programa que leia o salário de um trabalhador e o
valor da prestação de um empréstimo. Se a prestação:
• For maior que 20% do salário, imprima: “Empréstimo
não concedido.”
• Caso contrário, imprima: “Empréstimo concedido.” */

#include <stdio.h>

int main() {
    float salario, emprestimo, prestacao;
    printf("Salario: ");
    scanf("%f", &salario);
    printf("Valor da prestacao: ");
    scanf("%f", &prestacao);
    emprestimo = salario * 0.2;
    if (prestacao > emprestimo) {
        printf("Emprestimo nao concedido\n");
    } else {
        printf("Emprestimo concedido.\n");
    }
    return 0;
}