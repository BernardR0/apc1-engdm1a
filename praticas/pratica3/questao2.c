#include <stdio.h>   

int main () {
  float valor_bruto;
  printf("Dê o valor bruto: ");
  int deu_certo = scanf("%f", &valor_bruto);

  if (deu_certo && valor_bruto >= 0.0f);
    

  int valor_bruto_é_valido = valor_bruto <= 100.00f && valor_bruto >= 0.00f;
  if (valor_bruto_é_valido) {
    float valor_bruto_com_desconto = valor_bruto - valor_bruto * 0.01f;
    printf("O valor bruto com desconto é de %f\n", valor_bruto_com_desconto);
  } else {
    printf("Valor bruto invalido\n");
  } 
  int valor_bruto2_é_valido = valor_bruto <= 500.0f && valor_bruto >= 100.01f;
  if (valor_bruto2_é_valido) {
    float valor_bruto2_com_desconto = valor_bruto - valor_bruto * 0.05;
    printf("O valor bruto com desconto é de %f\n", valor_bruto2_com_desconto);
  } else {
    printf("Valor bruto invalido\n");
  }
  int valor_bruto3_é_valido = valor_bruto >= 500.01f;
  if (valor_bruto3_é_valido) {
    float valor_bruto3_com_desconto = valor_bruto - valor_bruto * 0.1f;
    printf("O valor bruto com desconto é de %f\n", valor_bruto3_com_desconto);
  } else {
    printf("Valor bruto invalido\n");
  }
  





  return 0;
}