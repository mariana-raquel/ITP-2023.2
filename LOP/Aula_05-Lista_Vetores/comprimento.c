#include <stdio.h>
#include <stdlib.h>
int busca(int x, int tam, int vetor[tam]) {
  int i;
  int existe = 0;
  for (i = 0; i < tam; i++) {
    if (vetor[i] == x) {
      existe = i;
    }
  }
  return existe;
}
int main() {
  int n, i;
  int c = 0;
  int v = scanf("%i", &n);
  int vetor[n];
  for (i = 0; i < n; i++) {
    v = scanf("%i", &vetor[i]);
  }
  int maior = vetor[0];
  for (i = 0; i < n; i++) {
    if (vetor[i] > maior) {
      maior = vetor[i];
    }
  }
  for (i = 0; i < n; i++) {
    if (vetor[i] == maior) {
      c = i;
      break;
    }
  }
  c -= busca(maior, n, vetor);
  printf("%i\n", abs(c) - 1);
  return 0;
}