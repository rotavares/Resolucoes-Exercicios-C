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