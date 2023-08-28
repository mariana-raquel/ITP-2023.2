#include <stdio.h>
#include <stdlib.h>
int main() {
  int a, b, c = 0;
  scanf("%i %i %i", &a, &b, &c);
  int maiorAB = (a+b+abs(a-b))/2;
  int maior = (maiorAB+c+abs(maiorAB-c))/2;
  printf("%i eh o maior\n", maior);
  return 0;
}
