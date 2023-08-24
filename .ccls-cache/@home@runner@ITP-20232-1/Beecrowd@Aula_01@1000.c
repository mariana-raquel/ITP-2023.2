#include <stdio.h>
int main() {
  double A, B = 0.0;
  int valido = scanf("%lf %lf", &A, &B);
  if(valido != 0) {
    double MEDIA = ((A * 3.5) + (B * 7.5)) / 11;
    printf("MEDIA = %.5lf\n", MEDIA);
  } else {
    printf("Falha ao ler valor!\n");
  }
  return 0;
}