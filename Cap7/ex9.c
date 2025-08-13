#include <stdio.h>
#include <string.h>

#define MAX_SIZE 256

int main() {
  char string[MAX_SIZE];
  char check[MAX_SIZE];
  char aux[MAX_SIZE];

  int i, j, count = 0;

  printf("Digite uma frase: ");
  fgets(string, MAX_SIZE, stdin);
  string[strlen(string) - 1] = '\0';

  printf("Digite a palavra para a contagem: ");
  fgets(check, MAX_SIZE, stdin);
  check[strlen(check) - 1] = '\0';

  for (i = 0, j = 0; string[i] != '\0'; i++) {

    while (string[i] != '\0' && string[i] != ' ') {
      aux[j] = string[i];
      i++;
      j++;
    }

    aux[j] = '\0';

    if (strcmp(aux, check) == 0) {
      count++;
    }

    j = 0;
  }

  if (count > 0) {
    printf("'%s' está contida %d vezes.\n", check, count);
  }
  else {
    printf("'%s' não está contida em '%s'.\n", check, string);
  }
  return 0;
}
