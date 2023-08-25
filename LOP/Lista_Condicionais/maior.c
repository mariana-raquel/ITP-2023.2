#include <stdio.h>
int main() {
  int a, b, c, d = 0;
  int valido = scanf("%i %i %i %i", &a, &b, &c, &d);
  if (a >= b && a >= c && a >= d) {
    printf("Maior: %i\n", a);
  } else if (b >= a && b >= c && b >= d) {
    printf("Maior: %i\n", b);
  } else if (c > a && c > b && c > d) {
    printf("Maior: %i\n", c);
  } else if (d > a && d > b && d > c) {
    printf("Maior: %i\n", d);
  }
  return 0;
}