#include <stdio.h>

int main()
{
  char string[64];
  fgets(string, 64, stdin);
  for (int i = 0; string[i] != '\0'; i++) {
    if (string[i] == ' ' || string[i] == '\n') {
      continue;
    }
    else {
      string[i] = string[i] + 32;
    }
  }
  printf("%s", string);
  return 0;
}
