/* Crie uma estrutura para representar as coordenadas de um ponto no plano (posições X e Y). Em seguida, declare e leia do teclado dois pontos e exiba a distância entre eles. */

#include <stdio.h>
#include <math.h>

struct ponto {
  double x;
  double y;
} ponto1, ponto2;

int main() {
  double distancia;

  printf("Digite as coordenadas do primeiro ponto\n");
  printf("(x, y): ");
  scanf("%lf, %lf", &ponto1.x, &ponto1.y);

  setbuf(stdin, NULL);

  printf("Digite as coordenadas do segundo ponto\n");
  printf("(x, y): ");
  scanf("%lf, %lf", &ponto2.x, &ponto2.y);

  distancia = sqrt(pow(ponto1.x - ponto2.x, 2) + pow(ponto1.y - ponto2.y, 2));

  printf("Distancia entre os dois pontos: %f\n", distancia);

  return 0;
}
