/* Crie uma estrutura para representar as coordenadas de um ponto no plano (posição X e Y). Em seguida, declare e leia do teclado um ponto e exiba a distância dele até a origem das coordenadas, isto é, a posição (0,0). */

#include <stdio.h>
#include <math.h>

struct ponto {
    double x;
    double y;
};

int main() {
    struct ponto p;
    double distancia;

    printf("Digite as coordenadas do ponto\n\n");
    printf("(x, y): ");
    scanf("%lf, %lf", &p.x, &p.y);
  
    distancia = sqrt(pow(p.x, 2) + pow(p.y, 2));

    printf("Distancia do ponto a origem: %f\n", distancia);
  
    return 0;
}
