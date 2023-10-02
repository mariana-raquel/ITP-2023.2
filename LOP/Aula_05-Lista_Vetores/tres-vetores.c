#include <stdio.h>
int main() {
  long i;
  int a[15], b[15], c[15], d[15];
  int ib = 0;
  int ic = 0;
  int id = 0;
  for(i = 0; i < 15; i++) {
    int valido = scanf("%d", &a[i]);
    b[i] = 0;
    c[i] = 0;
    d[i] = 0;
  }
  
  for(i = 0; i < 15; i++) {
    if(a[i] % 2 == 0) {
      b[ib] = a[i];
      ib++;
    }
    if(a[i] % 3 == 0) {
      c[ic] = a[i];
      ic++;
    }
    if(a[i] % 2 != 0 && a[i] % 3 != 0) {
      d[id] = a[i];
      id++;
    }
  }
  printf("B = [%i", b[0]);
  for(i = 1; i < 15; i++) {
    if(b[i] > 0) {
      printf(", %d", b[i]);
    }
  }
  printf("]\n");

  printf("C = [%i", c[0]);
  for(i = 1; i < 15; i++) {
    if(c[i] > 0) {
      printf(", %d", c[i]);
    }
  }
  printf("]\n");

  printf("D = [%i", d[0]);
  for(i = 1; i < 15; i++) {
    if(d[i] > 0) {
      printf(", %d", d[i]);
    }
  }
  printf("]\n");
}