#include <stdio.h>

#define MAX_SIZE 32

int main()
{
  char product[MAX_SIZE];
  float price, discount, spot;

  scanf("%s\n%f", product, &price);
  discount = price * 0.1;
  spot = price - discount;
  printf("PRODUTO: %s  VALOR: $%.2f  DESCONTO: $%.2f  À VISTA: $%.2f\n", product, price, discount, spot);
  return 0;
}
