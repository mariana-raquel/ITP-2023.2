#include <math.h>
#include <stdio.h>
int main() {
  double somaInv = 0;
  int soma = 0;
  int prod = 1;
  int i, n;
  double media_ari, media_har, media_geo, erro_har, erro_geo, erro_med;
  for (i = 1; i <= 10; i++) {
    int valido = scanf("%i", &n);
    soma += n;
    prod *= n;
    somaInv += 1.0/n; 
  }
  media_ari = soma / 10.0;
  media_geo = pow(prod, 0.1);
  media_har = 10.0 / somaInv;
  erro_har = (media_har - media_ari) / media_ari; 
  erro_geo = (media_geo - media_ari) / media_ari;
  erro_med = ((erro_har + erro_geo) / 2) * 100;
  printf("Média aritmética é %.2lf\n", media_ari);
  printf("Média harmônica é %.2lf\n", media_har);
  printf("Média geométrica é %.2lf\n", media_geo);
  printf("Erro médio é %.2lf %%\n", erro_med);
  return 0;
}