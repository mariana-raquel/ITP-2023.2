#include <stdio.h>
int main() {
  int n = 10;
  int x, y;
  char map[n][n];
  int coordBarco[4], coordFragata[6], coordDestroier[8];
  
  for(int i = 0; i < n; i++) {
    for(int j = 0; j < n; j++)  {
      map[i][j] = '~';
      if(i < 4) {
        coordBarco[i] = 0;
      }
      if(i < 6) {
        coordFragata[i] = 0;
      }
      if(i < 8) {
        coordDestroier[i] = 0;
      }
    } 
  }

  for(int i = 0; i < n; i++) {
    int v = scanf("%i %i", &x, &y);
    switch(i) {
      case 0:
        map[x][y] = '*';
        break;
      case 1: 
        coordBarco[0] = x;
        coordBarco[1] = y;
        break;
      case 2: 
        coordBarco[2] = x;
        coordBarco[3] = y;
        break;
      case 3: 
        coordFragata[0] = x;
        coordFragata[1] = y;
        break;
      case 4: 
        coordFragata[2] = x;
        coordFragata[3] = y;
        break;
      case 5: 
        coordFragata[4] = x;
        coordFragata[5] = y;
        break;
      case 6: 
        coordDestroier[0] = x;
        coordDestroier[1] = y;
        break;
      case 7: 
        coordDestroier[2] = x;
        coordDestroier[3] = y;
        break;
      case 8: 
        coordDestroier[4] = x;
        coordDestroier[5] = y;
        break;
      case 9: 
        coordDestroier[6] = x;
        coordDestroier[7] = y;
        break;
    }
  }

  if(coordBarco[0] == coordBarco[2]) {
    map[coordBarco[0]][coordBarco[1]] = '<';
    map[coordBarco[2]][coordBarco[3]] = '>';
    
  } else {
    map[coordBarco[0]][coordBarco[1]] = '^';
    map[coordBarco[2]][coordBarco[3]] = 'v';
  }

  if(coordFragata[0] == coordFragata[2]) {
    map[coordFragata[0]][coordFragata[1]] = '<';
    map[coordFragata[2]][coordFragata[3]] = '=';
    map[coordFragata[4]][coordFragata[5]] = '>';
  } else {
    map[coordFragata[0]][coordFragata[1]] = '^';
    map[coordFragata[2]][coordFragata[3]] = '|';
    map[coordFragata[4]][coordFragata[5]] = 'v';
  }

  if(coordDestroier[0] == coordDestroier[2]) {
    map[coordDestroier[0]][coordDestroier[1]] = '<';
    map[coordDestroier[2]][coordDestroier[3]] = '=';
    map[coordDestroier[4]][coordDestroier[5]] = '=';
    map[coordDestroier[6]][coordDestroier[7]] = '>';
  } else {
    map[coordDestroier[0]][coordDestroier[1]] = '^';
    map[coordDestroier[2]][coordDestroier[3]] = '|';
    map[coordDestroier[4]][coordDestroier[5]] = '|';
    map[coordDestroier[6]][coordDestroier[7]] = 'v';
  }
  
  for(int i = 0; i < n; i++) {
    for(int j = 0; j < n; j++)  {
      printf("%c", map[i][j]);
    }
    printf("\n");
  }

  return 0;
}