#include <stdio.h>
int permutacao(int x, int tam, int vetor[tam]) {
  int i;
  int existe = 0;
  for(i = 0; i < tam; i++) {
    if(vetor[i] == x) {
      existe = 1;
    }
  }
  return existe;
}

int removeRepeticao(int x, int tam, int vetor[tam]) {
  int i;
  int existe = 0;
  for(i = 0; i < tam; i++) {
    if(vetor[i] == x) {
      existe = 1;
    }
  }
  return existe;
}

int main() {
  int n, i;
  int valido = scanf("%i", &n);
  int p[n], v[n], novoVetor[n];
  int c = 0;
  for(i = 1; i <= n; i++) {
    novoVetor[i-1] = 0;
    p[i-1] = i;
    valido = scanf("%i", &v[i-1]);
  }
  for (i = 0; i < n; i++) {
    if(removeRepeticao(v[i], n, novoVetor) == 0) {
      novoVetor[i] = v[i];
    }
  }
  for(i = 0; i < n; i++) {
    c += permutacao(novoVetor[i], n, p);
  }
  if(c == n) {
    printf("sim\n");
  } else {
    printf("não\n");
  }
  return 0;
}