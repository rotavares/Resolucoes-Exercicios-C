#include <stdio.h>
#include <string.h>

#define MAX_SIZE 128

int main() 
{
  char string[MAX_SIZE];
  char check[MAX_SIZE];
  char aux[MAX_SIZE];

  int i, j;

  printf("Digite a frase: ");
  fgets(string, MAX_SIZE, stdin);
  string[strlen(string) - 1] = '\0';

  printf("Digite a palavra: ");
  fgets(check, MAX_SIZE, stdin);
  check[strlen(check) - 1] = '\0';

  for (i = 0, j = 0; string[i] != '\0'; i++) {

    while (string[i] != ' ' && string[i] != '\0') {

      aux[j] = string[i];
      i++;
      j++;
    }

    aux[j] = '\0';

    if (strcmp(aux, check) == 0) {
      printf("'%s' está contida em '%s'.\n", check, string);
      return 0;
    }
    else {
      j = 0;
    }
  }

  printf("'%s' não está contida em '%s'.\n", check, string);
  return 0;
}
