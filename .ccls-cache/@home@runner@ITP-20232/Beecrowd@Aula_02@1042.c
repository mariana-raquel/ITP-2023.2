#include <stdio.h>
int main() {
  int n1, n2, n3, maior, menor, medio;
  int valido = scanf("%i %i %i", &n1, &n2, &n3);
  if(n1 >= n2 && n1 >= n3) {
    if(n2 >= n3) {
      maior = n1;
      medio = n2;
      menor = n3;
    } else {
      maior = n1;
      medio = n3;
      menor = n2;
    }
  } else if(n2 >= n1 && n2 >= n3) {
     if(n1 >= n3) {
      maior = n2;
      medio = n1;
      menor = n3;
    } else {
      maior = n2;
      medio = n3;
      menor = n1;
    }
  } else if(n3 >= n1 && n3 >= n2) {
     if(n1 >= n2) {
      maior = n3;
      medio = n1;
      menor = n2;
    } else {
      maior = n3;
      medio = n2;
      menor = n1;
    }
  }
  printf("%i\n%i\n%i\n", menor, medio, maior);
  printf("\n%i\n%i\n%i\n", n1, n2, n3);
  
  return 0;
}