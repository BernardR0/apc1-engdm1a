#include <math.h>
#include <stdio.h>
#include <stdlib.h>
#include <string.h>
  
int main() {
  float cor[10], resistencia, resistencia_máxima, resistencia_mínima;
  int numero_de_faixas;
  char deseja_continuar;

  do {

    system("cls");

    printf("Digite o número de faixas: ");
    int deu_certo = scanf("%i", &numero_de_faixas);

    if (numero_de_faixas == 4) {
      for (int i = 1; i <= 4; i++) {
        printf(
            "-----------\n| preto = 0 |\n| marrom = 1 |\n| vermelho = 2 |\n| "
            "laranja = 3 |\n| amarelo = 4 |\n| verde = 5 |\n| azul = 6 |\n| "
            "violeta = 7 |\n| cinza = 8 |\n| branco = 9 |\n-----------\n");
        printf("A tolerância está na quarta faixa\n------------\n| prata = 5 "
               "|\n| ouro = 10 |\n| ausente = 20|\n------------\n");

        printf("Digite o número da cor da faixa %i: ", i);
        deu_certo = scanf("%f", &cor[i]);

        if (i < 4) {
          while (cor[i] > 9 && cor[i] < 0) {
            printf("Valor inválida, digite novamente o valor da faixa %d: ", i);
            deu_certo = scanf("%f", &cor[i]);
          }
        }
        if (i == 4) {
          while (cor[4] != 10 && cor[4] != 5 && cor[4] != 20) {
            printf("Valor inválida, digite novamente o valor da faixa 4: ");
            deu_certo = scanf("%f", &cor[4]);
          }
        }
      }
      resistencia = (cor[1] * 10 + cor[2]) * pow(10, cor[3]);
      resistencia_máxima = resistencia + (resistencia * cor[4] / 100);
      resistencia_mínima = resistencia - (resistencia * cor[4] / 100);

      if (resistencia >= 1000) {
        printf("\n A resistência é de %.2f kΩ, com variação de %.2f e %.2f "
               "kΩ\n",
               resistencia / 1000, resistencia_máxima / 1000,
               resistencia_mínima / 1000);
      } else if (resistencia < 1000) {
        printf("\n A resistência é de %.2f Ω, com variação de %.2f e %.2f "
               "Ω\n",
               resistencia, resistencia_máxima, resistencia_mínima);
      }

    } else if (numero_de_faixas == 5) {
      for (int i = 1; i <= 5; i++) {
        printf(
            "-----------\n| preto = 0 |\n| marrom = 1 |\n| vermelho = 2 |\n| "
            "laranja = 3 |\n| amarelo = 4 |\n| verde = 5 |\n| azul = 6 |\n| "
            "violeta = 7 |\n| cinza = 8 |\n| branco = 9 |\n-----------\n");
        printf("A tolerância está na quinta faixa\n------------\n| prata = 5 "
               "|\n| ouro = 10 |\n| ausente = 20|\n------------\n");

        printf("Digite o número da cor da faixa %i: ", i);
        deu_certo = scanf("%f", &cor[i]);

        if (i < 5) {
          while (cor[i] > 9 && cor[i] < 0) {
            printf("Valor inválida, digite novamente o valor da faixa %d: ", i);
            deu_certo = scanf("%f", &cor[i]);
          }
        }
        if (i == 5) {
          while (cor[5] != 10 && cor[5] != 5 && cor[5] != 20) {
            printf("Valor inválida, digite novamente o valor da faixa 5: ");
            deu_certo = scanf("%f", &cor[5]);
          }
        }
      }
      resistencia = (cor[1] * 10 + cor[2]) * pow(10, cor[3]);
      resistencia_máxima = resistencia + (resistencia * cor[5] / 100);
      resistencia_mínima = resistencia - (resistencia * cor[5] / 100);

      if (resistencia > 1000) {
        printf("\n A resistência é de %.2f kΩ, com variação de %.2f e %.2f "
               "kΩ\n",
               resistencia / 1000, resistencia_máxima / 1000,
               resistencia_mínima / 1000);
      } else if (resistencia < 1000) {
        printf("\n A resistência é de %.2f Ω, com variação de %.2f e %.2f "
               "Ω\n",
               resistencia, resistencia_máxima, resistencia_mínima);
      }

     
    }
    printf("\n Você deseja continuar? (s/n): ");
    deu_certo = scanf("%s", &deseja_continuar);
      

    return 0;
  } while (deseja_continuar == 's');
}
