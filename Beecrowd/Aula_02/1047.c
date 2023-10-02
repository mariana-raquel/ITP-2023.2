#include <stdio.h>
int main() {
  int hI, mI, hF, mF, dH, dM;
  int valido = scanf("%i %i %i %i", &hI, &mI, &hF, &mF);
  if(hI == hF && mI == mF) {
    printf("O JOGO DUROU 24 HORA(S) E 0 MINUTO(S)\n");
  } else if(hI < hF) {
      dH = hF - hI;
      if(mI < mF) {
        dM = mF - mI;
        dH--;
      } else {
        dM = (60 - mI) + mF;
        dH--;
      }
      printf("O JOGO DUROU %i HORA(S) E %i MINUTO(S)\n", dH, dM);
  } else if(hI > hF) {
      dH = 0;
      if(mI < mF) {
        dH = (24 - hI) + hF;
        dM = mF - mI;
      } else {
        dM = (60 - mI) + mF;
        dH++;
      }
      printf("O JOGO DUROU %i HORA(S) E %i MINUTO(S)\n", dH, dM);
  }
  return 0;
}