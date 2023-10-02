#include <stdio.h>
#include <math.h>
int main() {
  int r1, x1, y1, r2, x2, y2;
  int valido = scanf("%i %i %i %i %i %i", &r1, &x1, &y1, &r2, &x2, &y2);
  while(valido == 6) {
    double distacia = sqrt(pow((x1 - x2), 2) + pow((y1-y2), 2));
    if(distacia <= r1 - r2) {
      printf("RICO\n");
    } else {
      printf("MORTO\n");
    }
    valido = scanf("%i %i %i %i %i %i", &r1, &x1, &y1, &r2, &x2, &y2);
  }
  return 0;
}