#include <math.h>
#include <stdio.h>
#include <string.h>
#include <stdlib.h>






int main() {

  float cor[10], resistencia_nominal, resistencia_nominal_máxima, resistencia_nominal_mínima;
  int numero_de_faixas;
  int deseja_continuar;
  int deu_certo;


  do 
  {

    deu_certo = system("clear");
    printf("Digite o número de faixas: ");
    int deu_certo = scanf("%i", &numero_de_faixas);



        printf("Digite o número da cor da faixa %i: ", i);
        deu_certo = scanf("%f", &cor[i]);
        deu_certo = system("clear");



        if (i < 4) {
          while (cor[i] > 9 && cor[i] < 0) {
            printf("Valor inválida, digite novamente o valor da faixa %d: ", i);
            deu_certo = scanf("%f", &cor[i]);
            deu_certo = system("clear");


          }

          while (cor[4] != 10 && cor[4] != 5 && cor[4] != 20) {
            printf("Valor inválida, digite novamente o valor da faixa 4: ");
            deu_certo = scanf("%f", &cor[4]);
            deu_certo = system("clear");


          }


        printf("Digite o número da cor da faixa %i: ", i);
        deu_certo = scanf("%f", &cor[i]);
        deu_certo = system("clear");



        if (i < 5) {
          while (cor[i] > 9 && cor[i] < 0) {
            printf("Valor inválida, digite novamente o valor da faixa %d: ", i);
            deu_certo = scanf("%f", &cor[i]);
            deu_certo = system("clear");


          }

          while (cor[5] != 10 && cor[5] != 5 && cor[5] != 20) {
            printf("Valor inválida, digite novamente o valor da faixa 5: ");
            deu_certo = scanf("%f", &cor[5]);
            deu_certo = system("clear");


          }
        }
      }
      resistencia_nominal = (cor[1] * 10 + cor[2]) * pow(10, cor[3]);
      resistencia_nominal_máxima = resistencia_nominal + (resistencia_nominal * cor[5] / 100);
      resistencia_nominal_mínima = resistencia_nominal - (resistencia_nominal * cor[5] / 100);
      if (resistencia_nominal > 1000) {
        printf("\n A resistência é de %.2f kΩ, com variação de %.2f e %.2f "
               "kΩ\n",
               resistencia_nominal / 1000, resistencia_nominal_máxima / 1000,
               resistencia_nominal_mínima / 1000);
      } else if (resistencia_nominal < 1000) {
        printf("\n A resistência é de %.2f Ω, com variação de %.2f e %.2f "
               "Ω\n",
               resistencia_nominal, resistencia_nominal_máxima, resistencia_nominal_mínima);
      }

    }
    printf("\n Aperte 1 para continuar e 2 para sair: ");
    deu_certo = scanf("%d", &deseja_continuar);



  } while (deseja_continuar == 1);
  


return 0;


}