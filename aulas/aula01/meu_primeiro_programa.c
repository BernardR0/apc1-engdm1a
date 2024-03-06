#include <stdio.h>

int main() {
  float pi = 3.14;
  float raio = 0.0;

  printf("Informe o valor do raio da pizza");
  scanf("%f", &raio);

  float area = pi * raio * raio;

  printf("A area da pizza é de @%f\n", area);
  
  return 0;
}