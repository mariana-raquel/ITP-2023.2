#include <stdio.h>
int main() {
  double n1, n2, n3, n4, n5;
  int valido = scanf("%lf %lf %lf %lf", &n1, &n2, &n3, &n4);
  double media = ((n1 * 2) + (n2 * 3) + (n3 * 4) + (n4 * 1)) / 10.0;
  printf("Media: %.1lf\n", media);
  if(media >= 7) {
    printf("Aluno aprovado.\n");
  } else if(media < 5) {
    printf("Aluno reprovado.\n");
  } else if(media >= 5 && media < 7) {
    printf("Aluno em exame.\n");
    valido = scanf("%lf", &n5);
    printf("Nota do exame: %.1lf\n", n5);
    double mediaF = (media  + n5) / 2;
    if(mediaF >= 5) {
      printf("Aluno aprovado.\n");
    } else {
      printf("Aluno reprovado.\n");
    }
    printf("Media final: %.1lf\n", mediaF);
  }
  return 0;
}