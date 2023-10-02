#include <stdio.h>
int acharValor(int b, int n, int vetor[n]) {
  int c = 0;
  for(int i = 0; i < n; i++) {
    if(b == vetor[i]) {
      c++;
    }
  }
 return c;
}
int main() {
  int n;
  int v = scanf("%i", &n);
  int vetor[n];
  char vDup[n];
  
  for(int i = 0; i < n; i++) {
    v = scanf("%i", &vetor[i]);
  }

  int c = 0;
   for(int i = 0; i < n; i++) {
     int c2 = 0;
     for(int j = 0; j < n; j++) {
       if(vetor[i] == vDup[j]) {
         c2++;
       }
     }
    if(c2 == 0 && acharValor(vetor[i], n, vetor) == 2) {
      vDup[i] = (char) vetor[i];
    } else {
      vDup[i] = 'n';
    }
  }
  for(int i = 0; i < n; i++) {
    if(vDup[i] != 'n') {
      printf("%i ", vDup[i]);
    }
  }
  printf("\n");
  return 0;
}