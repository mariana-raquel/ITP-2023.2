#include <stdio.h>
#include <string.h>
#define tam 200
#define tam_max 201

int main() {
  int n;
  int v = scanf("%i\n", &n);
  char frases[n][tam_max];
  int maior = 0;
  int menor = tam;
  double soma = 0;
  for(int i = 0; i < n; i++) {
    char* v = fgets(frases[i], tam, stdin);
    int tamanho = strlen(frases[i]) - 1;
    frases[i][tamanho] = '\0';
    soma += tamanho;
    if(tamanho > maior) maior = tamanho;
    if(tamanho < menor) menor = tamanho;
  }
  double media = soma / n;
  int p = media;
  char pl[n];
  int c = 0;
  for(int i = 0; i < n; i++) {
    int tamanho = strlen(frases[i]);
    double diff = media - tamanho;
    printf("%i %.2lf %i %i\n", p, diff, (diff < 0 && diff*(-1) < p), diff <= p);
    if((diff < 0 && diff*(-1) < p) || diff <= p) {
      p = tamanho;
    }
  }
  printf("Tamanho máximo: %i\n", maior);
  printf("Tamanho mínimo: %i\n", menor);
  printf("Tamanho médio: %.2lf\n", media);
  printf("Tamanho mais próximo da média %i Textos\n", p);
  // printf(frases[ind]);
  return 0;
}