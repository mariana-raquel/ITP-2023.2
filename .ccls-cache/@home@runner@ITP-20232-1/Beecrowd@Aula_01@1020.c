#include <stdio.h>
int main() {
  int valor = 0;
  scanf("%i", &valor);
  int anos = valor / 365;
  int meses = valor % 365 / 30;
  int dias = valor % 365 % 30;
  printf("%i ano(s)\n", anos);
  printf("%i mes(es)\n", meses);
  printf("%i dia(s)\n", dias);
  return 0;
}
