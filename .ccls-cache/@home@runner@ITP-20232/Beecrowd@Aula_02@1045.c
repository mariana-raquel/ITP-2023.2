#include <stdio.h>
#include <math.h>
int main() {
  double a, b, c, aux;
  int valido = scanf("%lf %lf %lf", &a, &b, &c);
  if(b >= a && b >= c) {
    aux = a;
    a = b;
    b = aux;
  } else if(c >= a && c >= b) {
    aux = a;
    a = c;
    c = aux;
  }
  if(a >= b + c) {
    printf("NAO FORMA TRIANGULO\n");
  } else {
    if(pow(a, 2.0) == pow(b, 2.0) + pow(c, 2.0)) {
      printf("TRIANGULO RETANGULO\n");
    }
    if(pow(a, 2.0) > pow(b, 2.0) + pow(c, 2.0)) {
      printf("TRIANGULO OBTUSANGULO\n"); 
    }
    if(pow(a, 2.0) < pow(b, 2.0) + pow(c, 2.0)) {
      printf("TRIANGULO ACUTANGULO\n");
    }
    if(a == b && b == c) {
      printf("TRIANGULO EQUILATERO\n");  
    } else if(a == b || a == c || b == c) {
      printf("TRIANGULO ISOSCELES\n");
    }
  }
  return 0;
}