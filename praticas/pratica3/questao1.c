#include <stdio.h>

int main () {

  int numero;
  

  printf("Entre com o numero: ");
  int deu_certo = scanf("%i", &numero);
  
  if (deu_certo) { 
  int eh_par = numero % 2;
  printf("O resto da divisão é %i\n", eh_par);
  int numero_é_divisivel_por_2 = numero % 2 == 0;
  if (numero_é_divisivel_por_2) {
    printf("O numero é par\n");
  } else {
    printf("o numero é impar\n");
  }
  } else {
    printf("Número invalido seu bosta\n");
  } 



  return 0;
}