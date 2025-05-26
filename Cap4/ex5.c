#include <stdio.h>
#include <math.h> 

int main() {
    float numero, quadrado, raiz;
    scanf("%f", &numero);
    if (numero > 0) {
        quadrado = numero * numero;
        raiz = sqrt(numero);
    }
    printf("%.f ao quadrado = %.f\n", numero, quadrado);
    printf("raiz quadrada de %.f = %f\n", numero, raiz);
    return 0;     
}