#include <stdio.h>
void fibonacci(int n) {
  long int a = 1;
  long int b = 1;
  long int aux;
  int i;
  for(i = 3; i <= n; i++) {
    aux = b;
    b = a + b;
    a = aux;
  }
  printf("%lu", b);
}
int main() {
  int n;
  int v = scanf("%i", &n);
  fibonacci(n);
  return 0;    
}