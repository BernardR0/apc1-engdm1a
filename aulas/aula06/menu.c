#include <stdio.h>

int main () {
  int opcao;
  printf("MENU PRINCIPAL\n");
  printf("1 - Consultar Saldo\n");
  printf("2 - Fazer Recarga\n");
  printf("3 - Listar Recados\n");
  printf("4 - Ligacoes Feitas\n");
  printf("0 - Sair\n");
  printf("Escolha uma opção => ");
  int deu_certo = scanf("%i", &opcao);

  switch(opcao) {
    case 1: printf("Seu saldo eh R$10.00\n"); break;
    case 2: {
      float valor;
      printf("Entre com o valor da recarga: ");
      deu_certo = scanf("%f", &valor); break;
    }
    case 3: printf("Voce não tem recados\n"); break;
    case 4:
     printf("61 9939-8979\n");
     printf("61 9949-8979\n");
     printf("61 9959-8979\n");
     printf("61 9999-8979\n");
    break;
    case 0: printf("Saindo...\n");
    default: printf("Opção invalida\n");

    
  }


  return 0;
}