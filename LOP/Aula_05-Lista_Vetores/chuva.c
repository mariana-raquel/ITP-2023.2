#include <stdio.h>
int main() {
  int n, i;
  int v = scanf("%i", &n);
  int meses[n], novoVetor[n];
  for(i = 0; i < n; i++){
    v = scanf("%i", &meses[i]);
    novoVetor[i] = 0;
  }
  int maior = meses[0];
  for(i = 0; i < n; i++) {
    if(meses[i] > maior) {
      maior = meses[i];
    }
  }
  for(i = 0; i < n; i++) {
    if(meses[i] == maior) {
      novoVetor[i] = meses[i];
    } else {
      novoVetor[i] = 0;
    }
  }
  for(i = 0; i < n; i++) {
    if(novoVetor[i] > 0) {
      printf("%i ", i+1);
    }
  }
  printf("%i\n", maior);
  
  return 0;
}