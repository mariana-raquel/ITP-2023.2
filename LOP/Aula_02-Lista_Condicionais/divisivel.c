#include <stdio.h>
int main() {
  int a, b = 0;
  int valido = scanf("%i %i", &a, &b);
  if (b != 0 && a % b == 0) {
    printf("Resultado: %i\n", a / b);
  }
  return 0;
}
