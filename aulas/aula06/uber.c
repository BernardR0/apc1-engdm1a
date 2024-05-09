#include <stdio.h>


int main () {

  int avaliação;

  printf("Entre com a avaliação de 1 a 5: ");
  int deu_certo = scanf("%i", &avaliação);

 // if (avaliação == 1) {
 //   printf("Ruim\n");
 // } else if (avaliação == 2) {
 //   printf("Insuficiente\n");
 // } else if (avaliação == 3) {
 //   printf("Média\n");
 // } else if (avaliação == 4) {
 //   printf("Bom\n");
 // } else if (avaliação == 5) {
 //   printf("Ótimo\n");
 // } else {
 //   printf("Avaliação invalida\n");
 // }

 switch (avaliação) {
   case 1:  printf("O motorista ganhou *\n"); break;
   case 2:  printf("O motorista ganhou **\n"); break;
   case 3:  printf("O motorista ganhou ***\n"); break;
   case 4:  printf("O motorista ganhou ****\n"); break;
   case 5:  printf("O motorista ganhou *****\n"); break;    default: printf("Avaliação invalida\n");
 }


  return 0;
}