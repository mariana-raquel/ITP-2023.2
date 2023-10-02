#include <stdio.h>
#include <string.h>
#include <ctype.h>
int main() {
  char frase[60];
  char* v = fgets(frase, 60, stdin);
  int i = 0;
  while(frase[i] != '\0') {
    if(i == 0) {
      frase[i] = toupper(frase[i]);
    }
    else if(frase[i-1] == ' ') {
      frase[i] = toupper(frase[i]);
    } 
    else {
      frase[i] = tolower(frase[i]);
    }
    i++;
  }
  printf("%s\n", frase);
}