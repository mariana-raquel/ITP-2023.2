#include <stdio.h>
#include <string.h>
#include <ctype.h>
#define tam 40

char* rebobinar(int nA, int nB, char b[nB], char novoB[nB-nA]) {
  strcpy(&novoB[0], "");
  for(int i = nA; i < nB; i++) {
    char b1 = b[i];
    strcat(novoB, &b1);
  }
  return novoB;
}

int main() {
  char a[tam], b[tam];
  long ind[tam];
  char* v = fgets(a, tam, stdin);
  v = fgets(b, tam, stdin);
  int tamanho = strlen(b);
  char* substring = "";
  int cont = 0;
  a[strlen(a)-1] = '\0';
  b[tamanho-1] = '\0';
  
  int i = 0;
  while(b[i] != '\0') {
    b[i] = tolower(b[i]);
    if(a[i] != '\0') {
      a[i] = tolower(a[i]);  
    }
    i++;
  }
  
  while(substring != NULL) {
    substring = strstr(b, a);
    if(substring != NULL) {
      ind[cont] = tamanho - strlen(substring) - 1;
      cont++;
      char novoB[tam];
      
      strcpy(b, rebobinar(strlen(a), strlen(substring), substring, novoB));
    }
  }
  
  printf("Repetições: %i\n", cont);
  if(cont > 0) {
    printf("Posições: ");
    for(int j = 0; j < cont; j++) {
      printf("%lu ", ind[j]);
    }
    printf("\n");
  }
  return 0;
}