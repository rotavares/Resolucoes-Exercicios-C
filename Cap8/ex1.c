/* Implemente um programa que leia o nome, a idade e o endereço de uma pessoa e armazene esses dados em uma estrututura. Em seguida, imprima na tela os dados da estrutura lida. */

#include <stdio.h>
#include <string.h>

struct pessoa {
    char nome[32];
    unsigned idade;
    char endereco[64];
};

int main() {
    struct pessoa p;
  
    printf("Digite seu nome: ");
    fgets(p.nome, 32, stdin);

    char len = strlen(p.nome);


    if (p.nome[len-1] == '\n') {
        p.nome[len-1] = '\0';
    } else {
        setbuf(stdin, NULL);
    }


    printf("Digite sua idade: ");
    scanf("%u", &p.idade);

    setbuf(stdin, NULL);
    
    printf("Digite seu endereço: ");
    fgets(p.endereco, 64, stdin);

    len = strlen(p.endereco);
    p.endereco[len-1] = '\0';

    printf("Seus dados\n");
    printf("Nome: %s\n", p.nome);
    printf("Idade: %u\n", p.idade);
    printf("Endereço: %s\n", p.endereco);

    return 0;
}
