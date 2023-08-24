#include <stdio.h>
int main() {
  int numero, horas = 0;
  double valor = 0.0;
  scanf("%i %i %lf", &numero, &horas, &valor);
  double salario = horas * valor;
  printf("NUMBER = %i\n", numero);
  printf("SALARY = U$ %.2lf\n", salario);
  return 0;
}