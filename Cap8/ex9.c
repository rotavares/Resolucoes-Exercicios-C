/* Crie uma estrutura representando um atleta. Essa estrutura deve conter o nome do atleta, seu esporte, idade e altura Agora, escreva um programa que leia os dados de cinco atletas. Calcule e exiba os nomes do atleta mais alto e do mais velho. */

#include <stdio.h>
#include <string.h>

#define QTD_ATLETAS 5

struct atleta {
    char nome[32];
    char esporte[16];
    unsigned short idade;
    double altura;
};

int main() {
    struct atleta a[QTD_ATLETAS] = {0};

    printf("Digite os dados dos atletas\n");

    for (int i = 0; i < QTD_ATLETAS; i++) {
        printf("\t--- #%d Cadastro ---\n", i+1);

        printf("\tNome: ");
        fgets(a[i].nome, 32, stdin);

        int len = strlen(a[i].nome);
        if (a[i].nome[len-1] == '\n' ) {
            a[i].nome[len-1] = '\0';
        } else {
            setbuf(stdin, NULL);
        }

        printf("\tEsporte: ");
        fgets(a[i].esporte, 16, stdin);

        len = strlen(a[i].esporte);
        if (a[i].esporte[len-1] == '\n' ) {
            a[i].esporte[len-1] = '\0';
        } else {
            setbuf(stdin, NULL);
        }

        printf("\tIdade: ");
        scanf("%hu", &a[i].idade);
        setbuf(stdin, NULL);
        
        printf("\tAltura: ");
        scanf("%lf", &a[i].altura);
        setbuf(stdin, NULL);
    }
        int mais_alto = 0;
        int mais_velho = 0;

    for (int i = 0; i < QTD_ATLETAS; i++) {
        if (a[i].altura > a[mais_alto].altura) {
            mais_alto = i;
        }

        if (a[i].idade > a[mais_velho].idade) {
            mais_velho = i;
        }
    }
    
    printf("Atleta mais alto: %s\n", a[mais_alto].nome);
    printf("Atleta mais velho: %s\n", a[mais_velho].nome);
    
    return 0;
}
