#include<stdio.h>
#include <string.h>

int main(){
  char string1[100] = "The North Remembers";
  char string2[100] = "North";
  char* substring;

  substring = strstr(string1, string2);

  printf("%s\n", substring); //Imprime North Remembers, não North

  return 0;
}