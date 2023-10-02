#include <stdio.h>
int main() {
  long i, j, k, n;
  int a[15], b[15], c[15], d[15];
  int ib = 0;
  int ic = 0;
  int id = 0;
  for(i = 0; i < 15; i++) {
    int valido = scanf("%d", &a[i]);
  }
  for(j = 0; j < 15; j++) {
    if(a[j] % 2 == 0) {
      b[ib] = a[j];
      ib++;
    }
    else if(a[j] % 3 == 0) {
      c[ic] = a[j];
      ic++;
    }
    else {
      d[ic] = a[j];
      id++;
    }
  }
  printf("B = [");
  for(k = 0; k < sizeof(b); k++) {
    printf("%d, ", b[k]);
  }
  printf("%d]\n", b[sizeof(b)-1]);
  k = 0;
  printf("C = [");
  for(k = 0; k < sizeof(b); k++) {
    printf("%d, ", c[k]);
  }
  printf("%d]\n", c[14]);
  k = 0;
  printf("D = [");
  for(k = 0; k < sizeof(d); k++) {
    printf("%d, ", d[k]);
  }
  printf("%d]\n", d[14]);
}