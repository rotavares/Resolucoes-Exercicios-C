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