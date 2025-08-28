#include <stdio.h>
#include <string.h>

struct Register {
  char name[50];
  int age;
  char street[50];
  int number;
};

int main() {

  struct Register r;

  printf("Digite o nome: ");
  fgets(r.name,50,stdin);

  printf("Digite a idade: ");
  scanf("%d", &r.age);
  setbuf(stdin, NULL);
  
  printf("Informe o nome da rua: ");
  fgets(r.street, 50, stdin);

  printf("Informe o número da rua: ");
  scanf("%d", &r.number);

  printf("Nome: %s", r.name);
  printf("Idade: %d\n", r.age);
  printf("Rua: %s", r.street);
  printf("Número: %d", r.number);

  return 0;
}
