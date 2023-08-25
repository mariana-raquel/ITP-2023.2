#include <stdio.h>
int main() {
  int a, b, c = 0;
  int valido = scanf("%i %i %i", &a, &b, &c);
  if(a < (b + c) && b < (a + c) && c < (a + b)) {
    printf("possivel\n");
  } else {
    printf("impossivel\n");
  }
  return 0;
}