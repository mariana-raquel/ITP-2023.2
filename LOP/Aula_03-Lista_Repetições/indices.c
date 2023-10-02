#include <stdio.h>
int main() {
  int qtd, i;
  int cont = 0;
  double nota, media;
  double soma = 0;
  int valido = scanf("%i", &qtd);
  for(i = 1; i <= qtd; i++){
    valido = scanf("%lf", &nota);
    if(nota > 0) {
      soma += nota;
      cont++;
    }
  }
  if(cont > 0 && qtd > 0) {
    media = soma / cont;
    printf("%.2lf\n", media);
  } else {
    printf("A competicao nao possui dados historicos!");
  }
  return 0;
}