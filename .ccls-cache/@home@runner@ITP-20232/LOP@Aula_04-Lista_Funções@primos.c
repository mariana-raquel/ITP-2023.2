#include <stdio.h>
int primo(int n) {
  int i;
  int cont1 = 0;
  int cont2 = 0;
  for(i = 1; i <= n; i++) {
    if(n % i == 0) {
      cont1++;
    }
  }
  i = 0;
  for(i = 1; i <= n+2; i++) {
    if((n+2) % i == 0) {
      cont2++;
    }
  }
  return (cont1 == 2) && (cont2 == 2) ? 1 : 0;
}

int main() {
  int numero;
  int v = scanf("%i", &numero);
  int resultado = primo(numero);
  if(resultado == 1) {
    printf("Numero forma par de gemeos\n");
  } else {
    printf("Numero nao forma par de gemeos\n");
  }
  return 0;
}