#include <stdio.h>
int main() {
  int trilha, saude = 0;
  int valido = scanf("%i", &trilha);
  if (trilha >= 0 && trilha < 5) {
    printf("Iniciante\n");
  } else if (trilha >= 5 && trilha < 20) {
    valido = scanf("%i", &saude);
    if (saude == 0) {
      printf("Iniciante\n");
    } else if (saude == 1) {
      printf("Intermediário\n");
    }
  } else if (trilha >= 20) {
    valido = scanf("%i", &saude);
    if (saude == 0) {
      printf("Intermediário\n");
    } else if (saude == 1) {
      printf("Avançado\n");
    }
  }
  return 0;
}