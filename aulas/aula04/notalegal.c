#include <stdio.h>

int main() {
  char nome[31];
  int quantidade;
  float valor;
  
  printf("Entre com o nome do produto: ");
  scanf("%s", nome);

  printf("Entre com a quantidade do produto: ");
  scanf("%i", &quantidade);

  printf("Entre com o valor do produto: ");
  scanf("%f", &valor);

  return 0;
}