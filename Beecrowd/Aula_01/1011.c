#include <stdio.h>
int main() {
  const double PI = 3.14159;
  double raio = 0.0;
  scanf("%lf", &raio);
  double volume = (4.0/3) * PI * (raio*raio*raio);
  printf("VOLUME = %.3lf\n", volume);
  return 0;
}