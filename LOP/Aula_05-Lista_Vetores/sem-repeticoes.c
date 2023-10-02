#include <stdio.h>
int busca(int x, int tam, int vetor[tam]) {
  int i;
  int existe = 0;
  for(i = 0; i < tam; i++) {
    if(x == 0) {
      existe = 0;
    }
    else if(vetor[i] == x) {
      existe = 1;
    }
  }
  return existe;
}

int main() {
  int tamanho, j, i;
  int c = 0;
  int valido = scanf("%i", &tamanho);
  int vetor[tamanho];
  int novoVetor[tamanho];
  for (i = 0; i < tamanho; i++) {
    valido = scanf("%d", &vetor[i]);
    novoVetor[i] = 0;
  }
  for (j = 0; j < tamanho; j++) {
    if(busca(vetor[j], tamanho, novoVetor) == 0) {
      printf("%i ", vetor[j]);
      novoVetor[c] = vetor[j];
      c++;
    }
  }
  printf("\n");
}