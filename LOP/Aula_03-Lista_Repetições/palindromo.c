#include <stdio.h>
int main() {
  int nInicial, entrada, resto;
  int inverso = 0;
  int valido = scanf("%i", &entrada);
  nInicial = entrada;
  while(entrada != 0) {
    resto = entrada % 10;
    inverso = inverso * 10 + resto;
    entrada = entrada / 10; 
  }
 if(nInicial == inverso) {
   if(nInicial % 2 == 0) {
     printf("%i é Palíndromo e par.\n", nInicial);
   } else {
     printf("%i é Palíndromo e impar.\n", nInicial);
   }
 } else {
   if(nInicial % 2 == 0) {
     printf("%i não é Palíndromo e par.\n", nInicial);
   } else {
     printf("%i não é Palíndromo e impar.\n", nInicial);
   }
 }
  return 0;
}