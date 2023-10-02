#include <stdio.h>
int main() {
  int n1;
  double n2;
  int qtd = 0; 
  double valor = 0;
  int valido = scanf("%i", &n1);
  while(n1 != -1) {
    valido = scanf("%lf", &n2);
    qtd += n1;
    valor += (n1* n2);
    valido = scanf("%i", &n1);
  }
  printf("%i %.2lf\n", qtd, valor);
  return 0;
}