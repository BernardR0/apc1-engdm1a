// Faça um programa em C que calcule o fatorial de um número inteiro. n! = n x (n-1) x (n-2) x ... x 1.


#include <stdio.h>


int main () {
  int numero;

  printf("Entre com um numero: ");
  int deu_certo = scanf("%i", &numero);
  if (deu_certo && numero > 0) {
    long int fatorial = 1;
    for (int i = 1; i <= numero; i++) {
      fatorial = fatorial * i;
    } 
    printf("O fatorial de %i é %li\n", numero, fatorial);
 } else {
    printf("Numero invalido\n");
  }

 

  


  return 0;
}