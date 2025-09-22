/* Crie uma estrutura para representar as coordenadas de um ponto no plano (posições X e Y). Em seguida, declare e leia do teclado dois pontos e exiba a distância entre eles. */

#include <stdio.h>
#include <math.h>

struct Ponto {
  double x;
  double y;
} ponto1, ponto2;

int main() {
  double distancia;

  printf("Digite as coordenadas do primeiro ponto\n\n");
  printf("X: ");
  scanf("%lf", &ponto1.x);

  int c;
  while ((c = getchar()) != '\n' && c != EOF)) {} // Limpa o buffer de entrada do teclado.
  
  printf("Y: ");
  scanf("%lf", &ponto1.y);

  while ((c = getchar()) != '\n' && c != EOF)) {} // Limpa o buffer de entrada do teclado.

  printf("Digite as coordenadas do segundo ponto\n\n");
  printf("X: ");
  scanf("%lf", &ponto2.x);

  while ((c = getchar()) != '\n' && c != EOF)) // Limpa o buffer de entrada do teclado.

  printf("Y: ");
  scanf("%lf", &ponto2.y);

  return 0;
}
