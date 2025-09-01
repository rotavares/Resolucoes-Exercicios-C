#include <stdio.h>
#include <math.h>

struct point {
  float x;
  float y;
};

struct rectangle {
  struct point p1;
  struct point p2;
};

int main() {
  struct rectangle r;
  float a;
  float p;
  float d;

  printf("Insira a largura do retângulo: ");
  scanf("%f", &r.p1.x);
  printf("Insira o comprimento do retângulo: ");
  scanf("%f", &r.p2.y);

  a = r.p2.y * r.p1.x;
  p = 2 * (r.p2.y + r.p1.x);
  d = pow(r.p2.y, 2) + pow(r.p1.x, 2);
  d = sqrt(d);

  printf("Área = %.2f\n", a);
  printf("Perímetro = %.2f\n", p);
  printf("Comprimento da Diagonal = %.2f\n", d);

  return 0;
}
