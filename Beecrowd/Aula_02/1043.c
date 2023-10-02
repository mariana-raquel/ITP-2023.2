#include <stdio.h>
int main() {
  double a, b, c, area, perimetro;
  int valido = scanf("%lf %lf %lf", &a, &b, &c);
  if(a < b + c && b < a + c && c < a + b) {
    perimetro = a + b + c;
    printf("Perimetro = %.1lf\n", perimetro);
  } else {
    area = ((a + b) * c) / 2.0;
    printf("Area = %.1lf\n", area);
  }
  return 0;
}