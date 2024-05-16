#include <stdio.h>


int main () {
  int numero;
  int numero_valido = 0;
  
  while (numero_valido == 0) { 
  printf("Entre com o numero entre 1 a 10: ");
  int deu_certo = scanf("%i", &numero);
  numero_valido = numero >= 1 && numero <= 10;
  if (deu_certo && numero_valido >= 1 && numero <= 10) {
    printf("O numero é valido hihihi\n");
  } else {
    printf("O numero é invalido BIXO BURRO KKKKKKKKKKKKKK\n");
    getchar();
  } 
} 
   do { 
    printf("Entre com o numero entre 1 a 10: ");
    int deu_certo = scanf("%i", &numero);
    numero_valido = numero >= 1 && numero <= 10;
    if (deu_certo && numero_valido >= 1 && numero <= 10) {
      printf("O numero é valido hihihi\n");
    } else {
      printf("O numero é invalido BIXO BURRO KKKKKKKKKKKKKK\n");
      getchar();
    } 
  } while (numero_valido == 0);

  return 0;
}