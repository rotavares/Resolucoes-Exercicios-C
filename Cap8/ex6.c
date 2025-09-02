#include <stdio.h>
#include <string.h>

#define TIMES 2

struct Student {
  int enrolment;
  char name[50];
  float first, second, third;
};

int main() {
  int i, p;
  float a[TIMES], high;

  struct Student s[TIMES];
  for (i = 0; i < TIMES; i++) {
    printf("%d° Aluno > Número Matrícula: ", i + 1);
    scanf("%d", &s[i].enrolment);
    setbuf(stdin ,NULL);
    printf("%d° Aluno > Nome: ", i + 1);
    fgets(s[i].name, 50, stdin);
    s[i].name[strlen(s[i].name) - 1] = '\0';
    printf("%dº Aluno > Primeira nota: ", 1 + i);
    scanf("%f", &s[i].first);
    printf("%dº Aluno > Segunda nota: ", 1 + i);
    scanf("%f", &s[i].second);
    printf("%dº Aluno > Terceira nota: ", 1 + i);
    scanf("%f", &s[i].third);
  }

  

  for (i = 0; i < TIMES; i++) {
    a[i] = (s[i].first + s[i].second + s[i].third) / 3;
  }
  
  for (i = 0; i < TIMES; i++) {
    if (i == 0) {
      high == a[i];
    }
    if (a[i] > high) {
      high = a[i];
      p = i;
    }
  }

  printf("Nome: %s\nNotas: %.2f - %.2f - %.2f\nMédia: %.2f", s[p].name, s[p].first, s[p].second, s[p].third, high);

  return 0;
}
