/* 7) Faça um programa que leia um valor em reais e a cotação do
dólar. Em seguida, imprima o valor correspondente em
dólares. */

#include <stdio.h>

int main() {
    //R$1,000 = $0,1728 10 de fevereiro de 2025 às 17:20.
    float usd = 0.1728;
    float brl, usdBRL;
    printf("R$");
    scanf("%f", &brl);
    usdBRL = brl * usd;
    printf("Real Brasileiro para Dolares Americanos\nR$%.2f   =   $%.2f", brl, usdBRL);
    return 0;
}