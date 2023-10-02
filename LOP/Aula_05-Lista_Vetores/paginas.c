#include <stdio.h>
int main() {
  long int m, n, i, digitalizada;
  int v = scanf("%lu %lu", &m, &n);
  long int livro[m];
  for(i = 0; i < m; i++) {
    livro[i] = 0;
  }
  for(i = 0; i < n; i++) {
    v = scanf("%lu", &digitalizada);
    livro[digitalizada-1] = 1;
  }
  for(i = 0; i < m; i++) {
    if(livro[i] == 0) {
      printf("%lu ", i+1);
    }
  }
  printf("\n");
  return 0;  
}