#include <stdio.h>
int main() {
  int valor = 0;
  scanf("%i", &valor);
  int horas = valor / 3600;
  int minutos = valor % 3600 / 60;
  int segundos = valor % 3600 % 60;
  printf("%i:%i:%i\n", horas, minutos, segundos);
  return 0;
}
