/* Crie uma estrutura chamada Retângulo. Essa estrutura deverá conter o ponto superior esquerdo e ponto inferior direito do retângulo. Cada ponto é definido por uma estrutura Ponto, a qual contém as posições X e Y. Faça um programa que declare e leia uma estrutura Retângulo e exiba a área e o comprimento da diagonal e o perímetro desse retângulo. */

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

    double area, comprimento_diagonal, perimetro;

    printf("Digite as coordenadas.\nSuperior esquerdo do retângulo\n (x, y): ");
    scanf("%lf, %lf", &r.sup_esq.x, &r.sup_esq.y);

    setbuf(stdin, NULL);
  
    printf("Digite as coordendas.\nInferior direito do retângulo\n (x, y): ");
    scanf("%lf, %lf", &r.inf_dir.x, &r.inf_dir.y);
 
    if (r.sup_esq.x >= r.inf_dir.x || r.sup_esq.y <= r.inf_dir.y) {
        printf("Erro: As coordenadas fornecidas não forman um retângulo válido.\n");
        return 1;
    }

    area = (r.inf_dir.x - r.sup_esq.x) * (r.sup_esq.y - r.inf_dir.y);
    comprimento_diagonal = sqrt(pow(r.sup_esq.x - r.inf_dir.x, 2) + pow(r.sup_esq.y - r.inf_dir.y, 2));
    perimetro = ((r.inf_dir.x - r.sup_esq.x) * 2) + ((r.sup_esq.y - r.inf_dir.y) * 2);
  
    printf("\nResultados\n");
    printf("Área do retângulo: %f\n", area);
    printf("Comprimento da diagonal do retângulo: %f\n", comprimento_diagonal);
    printf("Perímetro do retângulo: %f\n", perimetro);

    return 0;
}
