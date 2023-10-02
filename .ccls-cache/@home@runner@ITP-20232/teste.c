#include <stdio.h>
int main() {
  int tamanho = 10;
  int vetor[tamanho];
  int i, j;
  for(i = 0; i < tamanho; i++) {
    vetor[i] = i;
  }
  for(j = 0; j < tamanho; j++) {
    printf("%i", vetor[j]);
  }
  
  return 0;
}