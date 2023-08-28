#include <stdio.h>
#include <string.h>
int main() {
  int peca1, qtd1, peca2, qtd2;
  double valor1, valor2;
  scanf("%i %i %lf %i %i %lf", &peca1, &qtd1, &valor1, &peca2, &qtd2, &valor2);
  double valorTotal = (qtd1 * valor1) + (qtd2 * valor2);
  printf("VALOR A PAGAR: R$ %.2lf\n", valorTotal);
  return 0;
}