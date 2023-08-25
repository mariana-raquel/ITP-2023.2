#include <stdio.h>
int main() {
  int n;
  int valido = scanf("%d", &n);
  if((n > 5 && n < 80) || (n < -1 && n > -10)) {
    printf("V\n");
  } else {
    printf("F\n");
  }
  return 0;
}