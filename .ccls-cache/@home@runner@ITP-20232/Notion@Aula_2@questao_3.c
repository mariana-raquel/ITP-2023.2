#include <stdio.h>
int main() {
  float temperatura = 0.0;
  float k = 0.0;
  float c = 0.0;
  float f = 0.0;
  char escala;
  int valido = scanf("%f %c", &temperatura, &escala);
  switch(escala) {
    case 'C':
      c = temperatura;
      k = c + 273.15;
      f = c * 1.8 + 32;
      break;
    case 'F':
      f = temperatura;
      c = (f - 32) / 1.8;
      k = c + 273.15;
      break;
    case 'K':
      k = temperatura;
      c = k - 273.15;
      f = c * 1.8 + 32;
      break;
  }
  printf("C = %.2f\nF = %.2f\nK = %.2f\n", c, f, k);
  return 0;
}