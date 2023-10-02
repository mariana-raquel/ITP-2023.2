#include <stdio.h>
int main() {
  int hI, hF;
  int valido = scanf("%i %i", &hI, &hF);
  if(hI == hF) {
    printf("O JOGO DUROU 24 HORA(S)");
  } else if(hI < hF) {
      int d = hF - hI;
      printf("O JOGO DUROU %i HORA(S)", d);
  } else if(hI > hF) {
      int d = (24 - hI) + hF;
      printf("O JOGO DUROU %i HORA(S)", d);
  }
  return 0;
}