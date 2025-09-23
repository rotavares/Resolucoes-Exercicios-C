/* Crie uma estrutura capaz de armazenar o nome e a data de nascimento de uma pessoa. Agora, escreva um programa que leia os dados de seis pessoas. Calcule e exiba os nomes da pessoa mais nova e da mais velha. */

#include <stdio.h>
#include <string.h>

#define QTD_PESSOAS 6

struct data {
  unsigned short dia;
  unsigned short mes;
  unsigned short ano;
};

struct pessoa {
  char nome[32];
  struct data nascimento;
};

int main() {
  struct pessoa p[QTD_PESSOAS] = {0};

  int mais_velha, mais_nova, data_valida;

  printf("Digite o nome e data de nascimento\n");

  for (int i = 0; i < QTD_PESSOAS; i++) {
    printf("\t--- #%d Cadastro ---\n", i+1);
    printf("\tNome: ");
    fgets(p.nome[i], 32, stdin);
    
    char len = strlen(p.nome);
    if (p[i].nome[len-1] == '\n') {
      p[i].nome[len-1] = '\0';
    } else {
      setbuf(stdin, NULL);
    }

    data_valida = 0;


    while (!data_valida) {

      p[i].nascimento.dia = 0;
      p[i].nascimento.mes = 0;
      p[i].nascimento.ano = 0;

      printf("\tData de nascimento (dd/mm/aaaa): ");
      scanf("%2hu/%2hu/%2hu", &p[i].nascimento.dia, &p[i].nascimento.mes, &p[i].nascimento.ano);
      setbuf(stdin, NULL);

      if (p[i].nascimento.dia == 0 || p[i].nascimento.mes == 0 {
        printf("Data de nascimento inválida.\n");
        continue;
      }

      switch (p[i].nascimento.mes) {
        case 2:
          if (p[i].nascimento.dia > 29 || (p[i].nascimento.dia == 29 && !((p[i].nasicmento.ano % 4 == 0 && p[i].nascimento.ano % 100 != 0) || (p[i].nascimento.ano % 400 == 0)))) {
            printf("Data de nascimento inválida.\n");
          } else {
          data_valida = 1;
        }
        break;
        case 4:
        case 6:
        case 9:
        case 11:
          if (p[i].nascimento.dia > 30) {
            printf("Data de nascimento inválida.\n");
          } else {
            data_valida = 1;
          }
        break;
        case 1:
        case 3:
        case 5:
        case 7:
        case 8:
        case 10:
        case 12:
          if (p[i].nascimento.dia > 31 {
            printf("Data de nascimento inválida.\n");
          } else {
            data_valida = 1;
          }
        break;
        default:
          printf("Data de nascimento inválida.\n");
      }
    }
  }

  mais_nova = 0;

  for (int i = 0; i < QTD_PESSOAS; i++) {
    if (p[i].nascimento.ano > p[mais_nova].nasicmento.ano) {
      
      mais_nova = i;

    } else if (p[i].nascimento.ano == p[mais_nova}.nascimento.ano) {

      if (p[i].nascimento.mes > p[mais_nova].nascimento.mes) {

        mais_nova = i;

      } else if (p[i].nascimento.mes == p[mais_nova].nascimento.mes) {

        if (p[i].nascimento.dia > p[mais_nova].nascimento.dia) {

          mais_nova = i;

        }
      }
    }
  }

  mais_velha = 0;

  for (int i = 0; i < QTD_PESSOAS; i++) {
    if (p[i].nascimento.ano < p[mais_velha].nascimento.ano) {

      mais_velha = i;

    } else if (p[i].nascimento.ano == p[mais_velha].nascimento.ano) {

      if (p[i].nascimento.mes < p[mais_velha].nascimento.mes) {

        mais_velha = i;

      } else if (p[i].nascimento.mes == p[mais_velha].nascimento.mes) {

        if (p[i].nascimento.dia < p[mais_velha].nascimento.dia) {

          mais_velha = i;

        }
      }
    }
  }

  printf("Pessoa mais velha: %s\n", p[mais_velha].nome);
  printf("Pessoa mais nova: %s\n", p[mais_nova].nome);

  return 0;
}
