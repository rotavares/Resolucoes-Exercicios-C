#include <stdio.h>

#define MAX_SIZE 128
int main()
{
  char string[MAX_SIZE];
  char criptography[MAX_SIZE];
  int i = 0;
  fgets(string, MAX_SIZE, stdin);

  for (i = 0; string[i] != '\0'; i++) {
    if (string[i] != ' ') {
      criptography[i] = string[i] + 3;
    }
    else {
      criptography[i] = string[i];
    }
  }
  criptography[i - 1] = '\0';
  printf("%s\n", criptography);
  return 0;
}
