#include <stdio.h>
#include <stdlib.h>

int main () {
  int opcao = 0;
  while (opcao != 4) {
  int deu_certo = system("clear");  
  printf("MEUS OVO\n");
  printf("1 - Iniciar\n");
  printf("2 - Ver Ranking dos Jogadores\n");
  printf("3 - Ajuda\n");
  printf("4 - Sair\n");
  printf("Escolha uma opção => ");
  deu_certo = scanf("%i", &opcao);
  while (getchar() != '\n'); // limpar buffer do teclado
  if (!deu_certo) { 
    opcao = 0;
 }
  
  switch(opcao) {
    case 1:{
      char nome[31];
      deu_certo = system("clear");
      printf("Entre com o nome do jogador: ");
      deu_certo = scanf("%[~\n]s", nome);
      while (getchar() != '\n'); // limpar buffer do teclado) 
      printf("Ola seu corno %s\n", nome);
      printf("Pressione ENTER p/ iniciar...");
      getchar();
    
      break;
   }
    case 2:{
      deu_certo = system("clear");
      printf("Tabela de graduação de macho 2024\n");
      printf("1o Lugar: Troglodita: Bernardo - 1000 pontos\n");
      printf("2o Lugar: Macho Alfa: Wanderson - 800 pontos\n");
      printf("3o Lugar: Homem Fino: Arthur - 700 pontos\n");
      printf("4o Lugar: Homem: Matheus - 500 pontos\n");
      printf("5o Lugar: Bixinha: Karlos - 200 pontos\n");
      printf("Pressione ENTER p/ voltar...");
      getchar();
      break;
    }
    case 3: printf("Ajuda\n"); break;
    case 4: printf("Saindo...\n"); break;
    default: printf("Opção invalida! Tente novamente\n");
    getchar();
  }
}    

     
  



    
  return 0;
}