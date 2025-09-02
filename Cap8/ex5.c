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

struct Cordinates {
  float x;
  float y;
};

int main() {
  struct Rectangle r;
  struct Cordinates c;

  printf("Insira o ponto superior esquerdo: ");
  scanf("%f%f", &r.p1.x, &r.p2.x);

  printf("Insira o ponto inferior direito: ");
  scanf("%f%f", &r.p1.y, &r.p2.y);

  printf("Insira o Ponto: ");
  scanf("%f%f", &c.x, &c.y);

  if (c.x > r.p1.x || c.x < r.p2.x) {
    printf("O ponto está fora do retângulo.\n");
  } else if (c.y > r.p1.y || c.y < r.p2.y) {
    printf("O ponto está fora do retângulo.\n");
  } else {
    printf("O ponto está dentro do retângulo.\n");
  }

  return 0;
}
