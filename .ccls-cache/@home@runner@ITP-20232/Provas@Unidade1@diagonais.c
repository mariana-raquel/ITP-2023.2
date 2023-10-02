#include <stdio.h>
int main() {
  int n;
  int v = scanf("%i", &n);
  int matriz[n][n];
  for (int i = 0; i < n; i++) {
    for (int j = 0; j < n; j++) {
      v = scanf("%i", &matriz[i][j]);
    }
  }

  int soma = 0;
  for (int i = 0; i < n; i++) {
    for (int j = 0; j < n; j++) {
      if (i == j) {
        soma += matriz[i][j];
      }
      if (i + j == n - 1) {
        soma += matriz[i][j];
      }
    }
  }
  printf("%i\n", soma);
  return 0;
}