#include <stdio.h>
int main() {
  int ilhas[10], sugestoes[10];
  int i;
  for(i = 0; i < 10; i++) {
    int v = scanf("%i", &sugestoes[i]);
    ilhas[i] = 0;
  }
  int c = 0;
  ilhas[c] = 1;
  for(i = 0; i < 10; i++) {
    ilhas[sugestoes[c]]++;
    if(ilhas[sugestoes[c]] > 1) {
      printf("%i\n", sugestoes[c]);
      break;
    }
    c = sugestoes[c];
  }
 
  return 0;
}