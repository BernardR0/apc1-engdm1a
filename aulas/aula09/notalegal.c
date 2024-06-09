#include <stdio.h>

int main() {
  enum unidade_e { // agrupa contantes
    unidade,
    caixa,
    peso,
    lata
  };

  struct produto_t { // agrupa variaveis
    char nome[31];
    int quantidade;
    int unidade; // 0 - unid, 1 - caixa, 2 - peso, 3 - lata
    float preco;
    float valor;
  };

  float total = 0.0f;
  struct produto_t produto[5];

  for (int i = 0; i < 5; i++) {
    printf("Entre com o nome do produto: ");
    int deu_certo = scanf("%s", produto[i].nome);

    printf("Entre com a quantidade do produto: ");
    deu_certo = scanf("%i", &produto[i].quantidade);

    printf("Entre com a unidade do produto\n");
    printf("0-unid, 1-caixa, 2-peso, 3-lata: ");
    deu_certo = scanf("%i", &produto[i].unidade);

    printf("Entre com o preco do produto: ");
    deu_certo = scanf("%f", &produto[i].preco);

    produto[i].valor = produto[i].preco * produto[i].quantidade;
    total = total + produto[i].valor;
  }
  printf("------------------------------------------\n");
  printf("\n             NOTA LEGAL\n");
  printf("------------------------------------------\n");
  printf("Item           Qtd Und     Preco     Valor\n");
  for (int i = 0; i < 5; i++) {
    printf("%-14s %03i ", produto[i].nome, produto[i].quantidade);
    switch (produto[i].unidade) {
    case unidade:
      printf("%3s", "UN");
      break;
    case caixa:
      printf("%3s", "CX");
      break;
    case peso:
      printf("%3s", "KG");
      break;
    case lata:
      printf("%3s", "LT");
      break;
    }
    printf("%10.2f%10.2f\n", produto[i].preco, produto[i].valor);
  }
  printf("Total.........................: %10.2f\n", total);

  return 0;
}