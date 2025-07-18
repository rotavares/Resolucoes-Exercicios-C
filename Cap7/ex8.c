/*Construa um programa que leia duas strings do teclado. 
Imprima uma mensagem informando se a segunda string lida está contida dentro da primeira.*/

#include <stdio.h>
#include <string.h>

#define MAX_SIZE 25

int main() {
    char string1[MAX_SIZE];
    char string2[MAX_SIZE];

    printf("digite a primeira frase: ");
    fgets(string1, MAX_SIZE, stdin);

    int i = 0;
    while (string1[i] != '\0' && string1[i] != '\n') {
        i++;
    }
    if (string1[i] == '\n') {
        string1[i] = '\0';
    }

    printf("digite a segunda frase: ");
    fgets(string2, MAX_SIZE, stdin);

    i = 0;
    while (string2[i] != '\0' && string2[i] != '\n') {
        i++;
    }
    if (string2[i] == '\n') {
        string2[i] = '\0';
    }

    int len1 = 0;
    while (string1[len1] != '\0') {
        len1++;
    }

    int len2 = 0;
    while (string2[len2] != '\0') {
        len2++;
    }

    int encontrada = 0;

    if (len2 > len1) {
        encontrada = 0;
    } else {
        for (int i = 0; i <= len1 - len2; i++) {
            int j = 0; 
            int match = 1;
			while (j < len2) {
                if (string1[i + j] != string2[j]) {
                    match = 0;
					break;
                }
                j++;
            }
			if (match == 1) {
                encontrada = 1;
                break;
            }
        }
    }
    if (encontrada) {
        printf("'%s' esta contida em '%s'.\n", string2, string1);
    } else {
        printf("'%s' não esta contida em '%s'.\n", string2, string1);
    }
    return 0;
}
