/* 10) A importância de R$ 780.000,00 será dividida entre três
ganhadores de um concurso, sendo que: 

i. O primeiro ganhador receberá 46% do total.
ii. O segundo receberá 32% do total.
iii. O terceiro receberá o restante.

Calcule e imprima a quantia recebida por cada
um dos ganhadores. */

#include <stdio.h>

int main () {
    const float premio = 780.000;
    float primeiroGanhador = premio * 0.46;
    float segundoGanhador = premio * 0.32;
    float terceiroGanhador = premio - (primeiroGanhador + segundoGanhador);
    printf("primeiro ganhador = R$ %.3f\nsegundo ganhador = R$ %.3f\nterceiro ganhador = R$ %.3f", primeiroGanhador, segundoGanhador, terceiroGanhador);
    return 0;
}