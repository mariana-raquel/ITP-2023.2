#include <stdio.h>
int main() {
  char nome[] = "";
  double salarioFixo, vendas = 0.0;
  scanf("%s %lf %lf", nome, &salarioFixo, &vendas);
  double total = (0.15 * vendas) + salarioFixo;
  printf("TOTAL = R$ %.2lf\n", total);
  return 0;
}