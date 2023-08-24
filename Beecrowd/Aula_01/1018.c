#include <stdio.h>
int main() {
  int valor = 0;
  scanf("%i", &valor);
  int cem = valor / 100;
  int cinquenta = valor % 100 / 50;
  int vinte = valor % 100 % 50 / 20;
  int dez = valor % 100 % 50 % 20 / 10;
  int cinco = valor % 100 % 50 % 20 % 10 / 5; 
  int dois = valor % 100 % 50 % 20 % 10 % 5 / 2; 
  int um = valor % 100 % 50 % 20 % 10 % 5 % 2;
  printf("%i\n", valor);
  printf("%i nota(s) de R$ 100,00\n", cem);
  printf("%i nota(s) de R$ 50,00\n", cinquenta);
  printf("%i nota(s) de R$ 20,00\n", vinte);
  printf("%i nota(s) de R$ 10,00\n", dez);
  printf("%i nota(s) de R$ 5,00\n", cinco);
  printf("%i nota(s) de R$ 2,00\n", dois);
  printf("%i nota(s) de R$ 1,00\n", um);
  
  return 0;
}
