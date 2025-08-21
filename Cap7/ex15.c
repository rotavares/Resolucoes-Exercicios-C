#include <stdio.h>

#define MAX_SIZE 32

int main()
{
  char str1[MAX_SIZE];
  char str2[MAX_SIZE];
  char aux[MAX_SIZE];
  int i;

  fgets(str1, MAX_SIZE, stdin);

  fgets(str2, MAX_SIZE, stdin);

  printf("\n");

  for (i = 0; str1[i] != '\0'; i++) {

    if (str1[1] < str2[i]) {
      printf("%s%s", str1, str2);
      break;
    }

    if (str1[i] > str2[i]) {
      printf("%s%s", str2, str1);
      break;
    }

  }
  return 0;
}
