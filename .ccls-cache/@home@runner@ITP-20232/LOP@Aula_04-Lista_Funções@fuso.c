#include <stdio.h>
int fuso(int a, int b, int c) {
  int fuso = a + b + c;
  while(fuso > 24) {
    int resto = fuso - 24;
    fuso = 0;
    fuso = resto;
  }
   while(fuso < 0) {
    int resto = fuso + 24;
    fuso = 0;
    fuso = resto;
  }
  return fuso;
}
int main() {
  int s,t, f;
  int v = scanf("%i %i %i", &s, &t, &f);
  int chegada = fuso(s, t, f);
  printf("Hora de saída: %i\n", s);
  printf("Hora de chegada: %i\n", chegada);
  return 0;
}