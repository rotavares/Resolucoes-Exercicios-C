#include <stdio.h>
#include <math.h>

struct coordinates {
  float x;
  float y;
};

int main() {

  struct coordinates c;

  printf("Insira o valor de X: ");
  scanf("%f", &c.x);
  
  printf("Insira o valor de Y: ");
  scanf("%f", &c.y);

  float d = sqrt((c.x * c.x) + (c.y * c.y));

  printf("A distancia do ponto (%.1f, %.1f) até a origem (0,0) é de aproxidamente %.2f.\n", c.x, c.y, d);

  return 0;
}
