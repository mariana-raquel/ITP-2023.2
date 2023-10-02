#include <stdio.h>
#include <math.h>
int mdc(int a, int b, int c) {
  int mdc = 0;
  int i;
  for(i = 1; i <= a; i++) {
    if(a % i == 0 && b % i == 0 && c % i == 0) {
      mdc = i;
    }
  }
  printf("%i\n", mdc);
  return mdc;
}
  
void verificarTripla(int x, int y, int z) {
  int aux;
  if(y > x && y > z) {
    aux = x;
    x = y;
    y = aux;
  } else if(z > x && z > y) {
    aux = x;
    x = z;
    z = aux;
  }

  if(pow(x, 2) == pow(y, 2) + pow(z, 2)) {
    if(mdc(x, y, z) == 1) {
      printf("tripla pitagorica primitiva\n");
    } else {
      printf("tripla pitagorica\n");
    }
  } else {
    printf("tripla\n");
  }
}
  
int main() {
  int x, y, z;
  int v = scanf("%i %i %i", &x, &y, &z);
  while(v != 0 && v != EOF) {
    verificarTripla(x, y, z);
    v = scanf("%i %i %i", &x, &y, &z);
  }
  return 0; 
}