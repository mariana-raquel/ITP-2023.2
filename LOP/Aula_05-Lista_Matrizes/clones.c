#include <stdio.h>
void verificarPosicao(int n, int m, int matriz[n][m], int nJ, int mJ) {
  int c = 1;
  int x = 0;
  for(int i = 0; i < n; i++) {
    for(int j = 0; j < m; j++) {
      int verificar = matriz[i][j];
      if(i == 0) {
        if(j == 0) {
          if((verificar > matriz[i][j+1]) && (verificar > matriz[i+1][j]) && (verificar > matriz[i+1][j+1])) {
            printf("Local %i: %i %i\n", c, i+1, j+1);
            c++;
            if(i == nJ-1 && j == mJ-1) {
              x++;
            }
          }
        }
        else if(j > 0 && j < m-1) {
          if((verificar > matriz[i][j-1]) && (verificar > matriz[i+1][j-1]) && (verificar > matriz[i+1][j])
            && (verificar > matriz[i+1][j+1]) && (verificar > matriz[i][j+1])) {
            printf("Local %i: %i %i\n", c, i+1, j+1);
            c++;
            if(i == nJ-1 && j == mJ-1) {
              x++;
            }
          }
        }
        else if(j == m-1) {
          if((verificar > matriz[i][j-1]) && (verificar > matriz[i+1][j-1]) && (verificar > matriz[i+1][j+1])) {
            printf("Local %i: %i %i\n", c, i+1, j+1);
            c++;
            if(i == nJ-1 && j == mJ-1) {
              x++; 
            }
          }
        }
      }
      else if(i > 0 && i < n-1) {
        if(j == 0) {
          if((verificar > matriz[i-1][j]) && (verificar > matriz[i-1][j+1]) && (verificar > matriz[i][j+1]) && (verificar > matriz[i+1][j+1]) && (verificar > matriz[i+1][j])) {
            printf("Local %i: %i %i\n", c, i+1, j+1);
            c++;
            if(i == nJ-1 && j == mJ-1) {
              x++;
            }
          }
        }
        else if(j > 0 && j < m-1) {
          if((verificar > matriz[i-1][j-1]) && (verificar > matriz[i-1][j]) && (verificar > matriz[i-1][j+1]) && (verificar > matriz[i][j-1]) && (verificar > matriz[i][j+1]) && (verificar > matriz[i+1][j-1]) && (verificar > matriz[i+1][j]) && (verificar > matriz[i+1][j+1])) {
            printf("Local %i: %i %i\n", c, i+1, j+1);
            c++;
            if(i == nJ-1 && j == mJ-1) {
              x++;
            }
          }
        }
        else if(j == m-1) {
          if((verificar > matriz[i-1][j]) && (verificar > matriz[i-1][j-1]) && (verificar > matriz[i][j-1]) && (verificar > matriz[i+1][j-1]) && (verificar > matriz[i+1][j])) {
            printf("Local %i: %i %i\n", c, i+1, j+1);
            c++;
            if(i == nJ-1 && j == mJ-1) {
              x++;
            }
          }
        }
      }
      else if(i == n-1) {
        if(j == 0) {
          if((verificar > matriz[i-1][j]) && (verificar > matriz[i-1][j+1]) && (verificar > matriz[i][j+1])) {
            printf("Local %i: %i %i\n", c, i+1, j+1);
            c++;
            if(i == nJ-1 && j == mJ-1) {
              x++;
            }
          }
        }
        else if(j > 0 && j < m-1) {
          if((verificar > matriz[i][j-1]) && (verificar > matriz[i-1][j-1]) && (verificar > matriz[i-1][j]) && (verificar > matriz[i-1][j+1]) && (verificar > matriz[i][j+1])) {
            printf("Local %i: %i %i\n", c, i+1, j+1);
            c++;
            if(i == nJ-1 && j == mJ-1) {
              x++;
            }
          }
        }
        else if(j == m-1) {
          if((verificar > matriz[i-1][j]) && (verificar > matriz[i-1][j-1]) && (verificar > matriz[i][j-1])) {
            printf("Local %i: %i %i\n", c, i+1, j+1);
            c++;
            if(i == nJ-1 && j == mJ-1) {
              x++;
            }
          }
        }
      }
    }
  }
  if(x > 0) {
    printf("Descanse na Força...\n");
  } else {
    printf("Ao resgate!\n");
  }
}

int main() {
  int a, b, c, d;
  int v = scanf("%i %i %i %i", &a, &b, &c, &d);
  int matriz[a][b];
  for(int i = 0; i < a; i++) {
    for(int j = 0; j < b; j++) {
      v = scanf("%i", &matriz[i][j]);
    }
  }

  verificarPosicao(a, b, matriz, c, d);

  return 0;
}