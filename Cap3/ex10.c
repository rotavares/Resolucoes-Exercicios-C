#include <stdio.h>

int main () {
    const float premio = 780.000;
    float primeiroGanhador = premio * 0.46;
    float segundoGanhador = premio * 0.32;
    float terceiroGanhador = premio - (primeiroGanhador + segundoGanhador);
    printf("primeiro ganhador = R$ %.3f\nsegundo ganhador = R$ %.3f\nterceiro ganhador = R$ %.3f", primeiroGanhador, segundoGanhador, terceiroGanhador);
    return 0;
}