/* Usando a estrutura Retângulo do exercício anterior, faça um programa que declare e leia uma estrutura Retângulo e um Ponto, e informe se esse ponto está ou não dentro do retângulo. */

#include <stdio.h>
#include <math.h>

struct ponto {
  double x;
  double y;
};

struct retangulo {
  struct ponto sup_esq;
  struct ponto inf_dir;
};

int main() {
  struct retangulo r;
  struct ponto p;

  printf("\nDigite as coordenadas.\nSuperior esquerdo do retângulo\n(x, y): ");
  scanf("%lf, %lf", &r.sup_esq.x, &r.sup_esq.y);

  setbuf(stdin, NULL);

  printf("\nDigite as coordendas.\nInferior direito do retângulo\n(x, y): ");
  scanf("%lf, %lf", &r.inf_dir.x, &r.inf_dir.y);

  if (r.sup_esq.x >= r.inf_dir.x || r.sup_esq.y <= r.inf_dir.y) {
    printf("\nErro: As coordenadas fornecidas não forman um retângulo válido.\n");
    return 1;
  }

  setbuf(stdin, NULL);

  printf("\nDigite as coordenadas.\nPonto para verificação\n(x, y): ");
  scanf("%lf, %lf", &p.x, &p.y);

  if ((p.x >= r.sup_esq.x && p.x <= r.inf_dir.x) && (p.y <= r.sup_esq.y && p.y >= r.inf_dir.y)) {
    printf("\nO ponto (%f, %f) está dentro do retângulo.\n", p.x, p.y);
  } else {
    printf("\nO ponto (%f, %f) não está dentro do retângulo.\n", p.x, p.y);
  }

  return 0;
}
