// Faça um programa em C que liste todos os múltiplos de n, entre 1 e 100.
#include <stdio.h>


int main () {
  int n;

  printf("Entre com o valor de n > 0: ");
  int deu_certo = scanf("%i", &n);
  int numero_valido = n > 0 && n < 10000001;

  if (deu_certo && numero_valido) {
    for (int i = 1; i <= 10000000; i++) {
      if (i % n == 0) {
        printf("%i\n", i);
      }
    }
   printf("\n");
  } else {
    printf("Numero invalido.\n");
  }
    

    



  return 0;
}