#include <stdio.h>

int main() {
  float valor_desconto;
  float valor_bruto;
  printf("Dê o valor bruto: ");
  int deu_certo = scanf("%f", &valor_bruto);

  if (deu_certo && valor_bruto >= 0.0f) {
    if (valor_bruto <= 100.0f) {
      valor_desconto = valor_bruto * 0.01f;
    } else if (valor_bruto <= 500.0f) {
      valor_desconto = valor_bruto * 0.05f;
    } else {
      valor_desconto = valor_bruto * 0.1f;
    }
    printf("O valor do desconto eh %.2f\n", valor_desconto);
  } else {
    printf("Valor invalido.Tente novamente\n");
  }

  return 0;
}