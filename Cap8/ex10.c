/* Usando a estrutura “atleta” do exercício anterior, escreva um programa que leia os dados de cinco atletas e os exiba por ordem de idad , do mais velho para o mais novo. */

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
        if (a[i].nome[len-1] == '\n') {
            a[i].nome[len-1] = '\0';
        } else {
            setbuf(stdin, NULL);
        }

        printf("\tEsporte : ");
        fgets(a[i].esporte, 16, stdin);

        len = strlen(a[i].esporte);
        if (a[i].esporte[len-1] == '\n') {
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

    for (int i = 0; i < QTD_ATLETAS; i++) {
        for( int j = i; j < QTD_ATLETAS; j++) {
            if (a[j].idade > a[i].idade) {
                struct atleta temp = a[i];
                a[i] = a[j];
                a[j] = temp;
            }
        }
    }

    printf("Atletas por ordem de idade do mais velho ao mais novo: ");

    for (int i = 0; i < QTD_ATLETAS; i++) {
        if (i != (QTD_ATLETAS - 1)) {
            printf("%s, ", a[i].nome);
        } else {
            printf("%s.\n", a[i].nome);
        }
    }

    printf("\n");

    return 0;
}
