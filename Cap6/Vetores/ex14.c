#include <stdio.h>
#include <math.h>
int main() {
    int N = 10;
    int V[N];
    float soma = 0;
    for (int i = 0; i < N; i++) {
        printf("Digite o valor %d: ", i + 1);
        scanf("%d", &V[i]);
        soma += V[i];
    }
    float media = soma / N;
    // printf("Media = %.2f\n", media);
    soma = 0;
    float e = 0, difQuadrados[N];
    for (int i = 0; i < N; i++) {
        e = (float)V[i] - media;
        difQuadrados[i] = e * e;
        soma += difQuadrados[i];
    }
    // printf("Soma dos quadrados: %.2f\n", soma);
    const float n = soma / (N-1);
    // printf("Raiz quadrada de %.2f = %.2f\n", n, sqrt(n));
    const float d = sqrt(n);
    printf("Desvio padrao amostral = %.2f", d);
    return 0;
}