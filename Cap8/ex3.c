#include <stdio.h>
#include <math.h>

struct coordinates {
  float x;
  float y;
};


int main() {

  struct coordinates c1;
  struct coordinates c2;

  printf("Primeiro ponto, insira o valor de X: ");
  scanf("%f", &c1.x);

  printf("Primeiro ponto, insira o valor de Y: ");
  scanf("%f", &c1.y);

  printf("Segundo ponto, insira o valor de X: ");
  scanf("%f", &c2.x);

  printf("Segundo ponto, insira o valor de Y: ");
  scanf("%f", &c2.y);

  float dx = c2.x - c1.x;
  float dy = c2.y - c1.y;
  float d = pow(dx, 2) + pow(dy, 2);
  d = sqrt(d);

  printf("A distancia de (%.1f, %.1f) para (%.1f, %.1f) é aproximadamente %.2f\n", c1.x, c1.y, c2.x, c2.y, d);

  return 0;
}
