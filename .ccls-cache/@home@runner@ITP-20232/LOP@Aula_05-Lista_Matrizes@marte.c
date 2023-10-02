#include <stdio.h>
void verificarMelhor(int n, int mat[n][3], int s) {
  int menor = s;
  int ind = 0;
  for (int i = 0; i < n; i++) {
    if (mat[i][0] < 0) {
      if ((mat[i][0]) * (-1) < menor) {
        menor = (mat[i][0]) * (-1);
        ind = i;
      }
    } else if (mat[i][0] == 0) {
      menor = mat[i][0];
      ind = i;
      break;
    } else {
      if (mat[i][0] <= menor) {
        menor = mat[i][0];
        ind = i;
      }
    }
  }
  printf("A melhor area para exploracao eh %i %i com valor %i\n", mat[ind][1], mat[ind][2], menor);
}

int main() {
  int n, m, s;
  int v = scanf("%i %i %i", &n, &m, &s);
  int mat[n][m];
  int ln = n - 2;
  int lm = m - 2;
  int somaT[(ln * lm)][3];
  for (int i = 0; i < n; i++) {
    for (int j = 0; j < m; j++) {
      v = scanf("%i", &mat[i][j]);
    }
  }
  int c = 0;
  for (int k = 0; k < ln; k++) {
    for (int p = 0; p < lm; p++) {
      int soma = 0;
      for (int i = k; i < 3 + k; i++) {
        for (int j = p; j < 3 + p; j++) {
          soma += mat[i][j];
        }
      }
      somaT[c][0] = s - soma;
      somaT[c][1] = k + 1;
      somaT[c][2] = p + 1;
      c++;
    }
  }
  verificarMelhor(ln * lm, somaT, s);
}
