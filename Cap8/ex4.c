#include <stdio.h>
#include <math.h>

struct Point {
  float x;
  float y;
};

struct Rectangle {
  struct Point p1;
  struct Point p2;
};

int main() {
  struct Rectangle r;
  float a;
  float p;
  float d;

  printf("Insira o ponto superior esquerdo: ");
  scanf("%f%f", &r.p1.x, &r.p2.x);

  printf("Insira o ponto inferior direito: ");
  scanf("%f%f", &r.p1.y, &r.p2.y);

  a = (r.p1.y - r.p2.y) * (r.p1.x - r.p2.x);
  p = ((r.p1.y - r.p2.y) + (r.p1.x - r.p2.x)) * 2;
  d = sqrt((pow(r.p2.x - r.p1.x, 2) + pow(r.p2.y - r.p1.y, 2)));

  printf("Área = %.2f\n", a);
  printf("Perímetro = %.2f\n", p);
  printf("Comprimento da Diagonal = %.2f\n", d);

  return 0;
}
