#include <stdio.h>

struct Horario {
  int hora;
  int minuto;
  int segundo;
};


int main() {

  struct Horario h[5];
  int i, p, maiorHora;

  for (i = 0; i < 5; i++) {
    printf("Digite os valores hora, minuto e segundo do %dº vetor:\n", i + 1);
    scanf("%d%d%d", &h[i].hora, &h[i].minuto, &h[i].segundo);
  }

  for (i = 0; i < 5; i++) {
    if (i == 0) {
      p = i;
      maiorHora = h[i].hora;
    }
    if (maiorHora < h[i].hora) {
      p = i;
    } else if (maiorHora == h[i].hora) {
      if (h[p].minuto < h[i].minuto) {
        p = i;
      } else if (h[p].minuto == h[i].minuto) {
        if (h[p].segundo < h[i].segundo) {
          p = i;
        }
      }
    }
  }

  printf("%dº vetor\nhoras: %d\nminutos: %d\nsegundos: %d\n", p + 1, h[p].hora, h[p].minuto, h[p].segundo);
  return 0;
}
