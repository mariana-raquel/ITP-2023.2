#include <stdio.h>
int main() {
  int n, i;
  int c = 0;
  int v = scanf("%i", &n);
  int respostas[n];
  int gabarito[n];
  for(i = 0; i < n; i++) {
    v = scanf("%i", &gabarito[i]);
  }
  for(i = 0; i < n; i++) {
    v = scanf("%i", &respostas[i]);
  }
  for(i = 0; i < n; i++) {
    if(gabarito[i] == respostas[i]) {
      c++;
    }
  }
  if(c == 1) {
    printf("1 acerto\n");
  }
  else {
    printf("%i acertos\n", c);
  }
  return 0;
}