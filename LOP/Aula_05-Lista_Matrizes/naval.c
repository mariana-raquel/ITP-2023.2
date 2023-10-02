#include <stdio.h>
void verificarPosicoes(int n, int m, int matriz[n][m]) {
  char mat[n][m];
  for (int i = 0; i < n; i++) {
    for (int j = 0; j < m; j++) {
      int verificar = matriz[i][j];
      if (verificar > 0) {
        if (i == 0) {
          if (j == 0) {
            if (matriz[i][j + 1] > 0) {
              mat[i][j] = '<';
            } else if (matriz[i + 1][j] > 0) {
              mat[i][j] = '^';
            } else {
              mat[i][j] = '*';
            }
          } else if (j == m - 1) {
            if (matriz[i][j - 1] > 0) {
              mat[i][j] = '>';
            } else if (matriz[i + 1][j] > 0) {
              mat[i][j] = '^';
            } else {
              mat[i][j] = '*';
            }
          } else {
            if (matriz[i][j - 1] > 0 &&
                (mat[i][j - 1] == '<' || mat[i][j - 1] == '=')) {
              if (matriz[i][j + 1] > 0 && matriz[i + 1][j + 1] == 0) {
                mat[i][j] = '=';
              } else if (matriz[i][j + 1] == 0 && matriz[i + 1][j + 1] == 0) {
                mat[i][j] = '>';
              } else {
                mat[i][j] = '*';
              }
            } else if (matriz[i][j + 1] > 0 && matriz[i + 1][j + 1] == 0) {
              if (mat[i][j - 1] == '<') {
                mat[i][j] = '=';
              } else if (mat[i][j - 1] == '=') {
                mat[i][j] = '=';
              } else if (mat[i][j - 1] == '=') {
                mat[i][j] = '=';
              } else {
                mat[i][j] = '*';
              }
            } else if (matriz[i + 1][j] > 0) {
              mat[i][j] = '^';
            } else {
              mat[i][j] = '*';
            }
          }
        } else if (i == n - 1) {
          if (j == 0) {
            if (matriz[i - 1][j] > 0 &&
                (mat[i - 1][j] == '|' || mat[i - 1][j] == '^')) {
              mat[i][j] = 'v';
            } else if (matriz[i][j + 1] > 0 && mat[i - 1][j] != '|' &&
                       mat[i - 1][j] != '^') {
              mat[i][j] = '<';
            } else {
              mat[i][j] = '*';
            }
          } else if (j == m - 1) {
            if (matriz[i - 1][j] > 0 &&
                (mat[i - 1][j] == '|' || mat[i - 1][j] == '^')) {
              mat[i][j] = 'v';
            } else if (matriz[i][j - 1] > 0 && mat[i][j - 1] != 'v') {
              mat[i][j] = '>';
            } else {
              mat[i][j] = '*';
            }
          } else {
            if (matriz[i - 1][j] > 0 &&
                (mat[i - 1][j] == '|' || mat[i - 1][j] == '^')) {
              mat[i][j] = 'v';
            } else if (matriz[i][j - 1] > 0 && mat[i][j - 1] != 'v') {
              if (matriz[i][j + 1] > 0 && mat[i - 1][j + 1] != '|' &&
                  mat[i - 1][j + 1] != '^') {
                mat[i][j] = '=';
              } else if (matriz[i][j + 1] == 0) {
                mat[i][j] = '>';
              } else {
                mat[i][j] = '*';
              }
            } else if (matriz[i][j + 1] > 0 && mat[i - 1][j + 1] != '|' &&
                       mat[i - 1][j - 1] != '^') {
              mat[i][j] = '<';
            } else {
              mat[i][j] = '*';
            }
          }
        }

        else {
          if (j == 0) {
            if (mat[i - 1][j] == '^') {
              if (matriz[i + 1][j] > 0) {
                mat[i][j] = '|';
              } else {
                mat[i][j] = 'v';
              }
            } else if (matriz[i + 1][j] > 0) {
              if (matriz[i - 1][j] > 0) {
                mat[i][j] = '|';
              } else {
                mat[i][j] = '^';
              }
            } else if (matriz[i][j + 1] > 0) {
              mat[i][j] = '<';
            } else {
              mat[i][j] = '*';
            }
          } else if (j == m - 1) {
            if (mat[i - 1][j] == '^' || mat[i - 1][j] == '|') {
              if (matriz[i + 1][j] > 0) {
                mat[i][j] = '|';
              } else {
                mat[i][j] = 'v';
              }
            } else if (matriz[i + 1][j] > 0) {
              if (matriz[i - 1][j] > 0) {
                mat[i][j] = '|';
              } else {
                mat[i][j] = '^';
              }
            } else if (matriz[i][j - 1] > 0) {
              mat[i][j] = '>';
            } else {
              mat[i][j] = '*';
            }
          } else {
            if (mat[i][j - 1] != '<' && mat[i][j - 1] != '=' && mat[i][j + 1] != '>' && mat[i][j - 1] != '=' && mat[i - 1][j] != '^' && mat[i - 1][j] != '|' && matriz[i + 1][j] > 0 && (matriz[i + 1][j - 1] == 0 || matriz[i + 1][j + 1] == 0)) {
              mat[i][j] = '^';
            } else if (mat[i - 1][j] == '^' && matriz[i + 1][j] > 0) {
              mat[i][j] = '|';
            } else if (mat[i - 1][j] == '|' && matriz[i + 1][j] > 0) {
              mat[i][j] = '|';
            } else if ((mat[i - 1][j] == '^' || mat[i - 1][j] == '|') && matriz[i + 1][j] == 0) {
              mat[i][j] = 'v';
            }
             else if ((mat[i][j - 1] == '<' || mat[i][j - 1] == '=') && matriz[i][j + 1] == 0) {
              mat[i][j] = '0';
            } else if ((mat[i][j - 1] == '<' || mat[i][j - 1] == '=') && matriz[i][j + 1] > 0) {
              if (mat[i - 1][j + 1] != '^' && mat[i - 1][j + 1] != '|') {
                mat[i][j] = '=';
              } else {
                mat[i][j] = '>';
              }
            } else if (mat[i][j - 1] != '<' && mat[i][j - 1] != '=' && matriz[i][j + 1] > 0) {
              if ((mat[i - 1][j] == '<' || mat[i - 1][j] == '=' || mat[i - 1][j] == '>') &&
                  (mat[i][j - 1] == '^' || mat[i][j - 1] == 'v' || mat[i][j - 1] == '|') &&
                  (mat[i + 1][j] == '<' || mat[i + 1][j] == '=' || mat[i + 1][j] == '>') &&
                  (mat[i][j - 1] == '^' || mat[i][j - 1] == 'v' || mat[i][j - 1] == '|')) {
                mat[i][j] = '*';
              } else {
                mat[i][j] = '<';
              }
            } else {
              mat[i][j] = '*';
            }
          }
        }

      } else {
        mat[i][j] = '~';
      }
    }
  }
  for (int i = 0; i < n; i++) {
    for (int j = 0; j < n; j++) {
      printf("%c", mat[i][j]);
    }
    printf("\n");
  }
}

int main() {
  int n = 10;
  int m = 2;
  int ent[n][m], mat[n][n];

  for (int i = 0; i < n; i++) {
    for (int j = 0; j < m; j++) {
      int v = scanf("%i", &ent[i][j]);
    }
  }
  for (int i = 0; i < n; i++) {
    for (int j = 0; j < n; j++) {
      mat[i][j] = 0;
    }
  }
  for (int i = 0; i < n; i++) {
    for (int j = 0; j < n; j++) {
      mat[ent[i][0]][ent[i][1]] = 1;
    }
  }

  verificarPosicoes(n, n, mat);
}