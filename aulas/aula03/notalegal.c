#include <stdio.h>

int main() {
  char nome[31];
  int quantidade;
  float valor;
  
  printf("Entre com o nome do produto: ");
  int deu_certo = scanf("%[^\n]s", nome);
  
  printf("Entre com a quantidade do produto: ");
  deu_certo = scanf("%i", &quantidade);
 
  printf("Entre com o valor do produto: ");
  deu_certo = scanf("%f", &valor);

  printf("---------------------------\n");
  printf("N O T A   L E G A L\n");
  printf("---------------------------\n");
  printf("Item:                 QTD    Valor\n");
  printf("%-10s %03i %9.2f\n", nome, quantidade, valor);

  return 0;
}