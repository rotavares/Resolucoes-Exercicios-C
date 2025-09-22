/* Implemente um programa que leia o nome, a idade e o endereço de uma pessoa e armazene esses dados em uma estrututura. Em seguida, imprima na tela os dados da estrutura lida. */

#include <stdio.h>

struct Pessoa {
  char nome[32];
  unsigned idade;
  char endereco[64];
};

int main() {
  struct Pessoa p;
  
  printf("Digite seu nome: ");
  fgets(p.nome, 32, stdin);

  int strlen;
  for (strlen = 0; p.nome[strlen] != '\0'; strlen++) {}

  if (p.nome[strlen-1] == '\n') {
    p.nome[strlen-1] = '\0';
  } else {
    int c;
    while ((c = getchar()) != '\n' && c != EOF) {} // Limpar o buffer de entrada do teclado.
  }

  printf("Digite sua idade: ");
  scanf("%u", &p.idade);

  int c;
  while ((c = getchar()) != '\n' && c != EOF) {} // Limpar o buffer de entrada do teclado.

  printf("Digite seu endreço: ");
  fgets(p.endereco, 64, stdin);

  for (strlen = 0; p.endereco[strlen] != '\0'; strlen++) {}
  p.endereco[strlen-1] = '\0';

  printf("Seus dados\n\n");
  printf("\tNome: %s\n", p.nome);
  printf("\tIdade: %u\n", p.idade);
  printf("\tEndereço: %s\n", p.endereco);

  return 0;
}
