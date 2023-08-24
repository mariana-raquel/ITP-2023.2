#include <stdio.h>
int main() {
  int A, B, C, D = 0;
  scanf("%i %i %i %i", &A, &B, &C, &D);
  int DIFERENCA = (A * B - C * D);
  printf("DIFERENCA = %i\n", DIFERENCA);
  return 0;
}