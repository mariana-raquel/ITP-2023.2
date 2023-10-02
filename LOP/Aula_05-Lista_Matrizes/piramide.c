#include <stdio.h>
int lado(int i, int n) {
  int metade = n / 2;
  if(n % 2 == 0) {
    if(i < metade - 1) return -1;
      else if(i == metade-1 || i == metade) return 0;
      else return 1;
    } else {
      if(i < metade) return -1;
      else if(i == metade) return 0;
      else return 1;
  }
}
int main() {
  int n;
  int v = scanf("%i", &n);
  int mat[n][n];
  
  int valor = 1;
  int inicio = 1;
  for(int i = 0; i < n; i++) {
    if(lado(i, n) == 1) {
      inicio--;
    }
    valor = inicio;
    for(int j = 0; j < n; j++) {
      if(lado(j, n) == -1) {
        mat[i][j] = valor;
        valor++;
      }
      else if(lado(j, n) == 0) {
        mat[i][j] = valor;
      }
      else if(lado(j, n) == 1) {
        valor--;
        mat[i][j] = valor;
      }
    }
    if(lado(i, n) == -1) {
      inicio++;
    }
  }
  for(int i = 0; i < n; i++) {
    for(int j = 0; j < n; j++) {
      printf("%i ", mat[i][j]);
    }
    printf("\n");
  }
  return 0; 
}