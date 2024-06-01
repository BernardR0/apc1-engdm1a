#include <stdio.h>
#include <string.h>

int main() {    //012345678901234567890123456789
  char nome [31]; // um nome de uma pessoa qualquer\0

  printf("Entre com seu nome: ");
  int deu_certo = scanf("%[^\n]", nome);
  printf("Ola %s!\n", nome);

  char primeiro_nome[21];
  char ultimo_nome[21];
  strcpy(primeiro_nome, "Bernardo"); // primeiro_nome = "Bernardo"
  strcpy(ultimo_nome, "Lira");
  strcpy(nome, primeiro_nome);
  strcat(nome, ultimo_nome); // nome = primeiro_nome + ultimo_nome
  printf("%s\n", nome);
  int tamanho = strlen(nome);
  printf("O tamanho do nome é %i\n", tamanho);
  printf("%s e %s sao iguais? %i\n", primeiro_nome, ultimo_nome, strcmp(primeiro_nome, ultimo_nome)); // primeiro_nome == ultimo_nome

  return 0;
}