#include <locale.h>
#include <math.h>
#include <stdio.h>
#include <stdlib.h>

int main() {

  setlocale(LC_ALL, "Portuguese");

  float cor[6], nf, R, R_max, R_min;
  char resp;

  do {

    system("cls");

    printf("\n Digite numero de faixas:\n");
    scanf("%f", &nf);

    if (nf == 4) {

      for (int j = 1; j <= 4; j++) {

        printf("----------------\n| preto = 0    |\n| marrom = 1   |\n| "
               "vermelho = 2 |\n| laranja = 3  |\n| amarelo = 4  |\n| verde = "
               "5    |\n| azul = 6     |\n| violeta = 7  |\n| cinza = 8    "
               "|\n| branco = 9   |\n----------------");
        printf("\n Tolerancia = 4 faixa \n-----------------\n| ouro = 5      "
               "|\n| prata = 10    |\n| ausencia = 20 |\n-----------------");

        printf("\n Digite valor correspondente da faixa %d:\n", j);
        scanf("%f", &cor[j]);

        if (j < 4) {

          while (cor[j] > 9 || cor[j] < 0) {

            printf("\n valor invalido \n");

            printf("\n Digite valor correspondente da faixa %d:\n", j);
            scanf("%f", &cor[j]);
          }
        }
        if (j == 4) {
          while (cor[4] != 5 && cor[4] != 10 && cor[4] != 20) {

            printf("\n valor invalido \n");

            printf("\n digite o numero correspondente da faixa 4:\n");
            scanf("%f", &cor[4]);
          }
        }
      }

      R = ((cor[1] * 10) + cor[2]) * pow(10, cor[3]);
      R_max = R + (R * cor[4]) / 100;
      R_min = R - (R * cor[4]) / 100;

      if (R >= 1000) {
        printf("\n Resistência = %.2f kΩ com variacao entre %.2f e %.2f KΩ \n",
               R / 1000, R_max / 1000, R_min / 1000);
      }
      if (R < 1000) {

        printf("\n Resisitencia = %.2f Ω com variacao entre %.2f e %.2f Ω \n",
               R, R_max, R_min);
      }
    }

    else if (nf == 5) {

      for (int j = 1; j <= 5; j++) {

        printf("----------------\n| preto = 0    |\n| marrom = 1   |\n| "
               "vermelho = 2 |\n| laranja = 3  |\n| amarelo = 4  |\n| verde = "
               "5    |\n| azul = 6     |\n| violeta = 7  |\n| cinza = 8    "
               "|\n| branco = 9   |\n----------------");

        printf("\nTolerancia =  faixa 5 \n-----------------\n| ouro = 5      "
               "|\n| prata = 10    |\n| ausencia = 20 |\n-----------------");

        printf("\n Digite valor correspondente da faixa %d:\n", j);
        scanf("%f", &cor[j]);

        if (j < 5) {
          while (cor[j] > 9 || cor[j] < 0) {

            printf("\n valor invalido \n");

            printf("\n Digite valor correspondente da faixa \n");
            scanf("%f", &cor[j]);
          }
        }

        if (j == 5) {
          while (cor[5] != 5 && cor[5] != 10 && cor[5] != 20) {

            printf("\n valor invalido \n");

            printf("\n digite o numero correspondente da faixa 5:\n");
            scanf("%f", &cor[5]);
          }
        }
      }

      R = ((cor[1] * 100) + (cor[2] * 10) + (cor[3] * 1)) * pow(10, cor[4]);
      R_max = R + (R * cor[5]) / 100;
      R_min = R - (R * cor[5]) / 100;

      if (R > 1000) {
        printf("\n Resistência = %.2f kΩ com variacao entre %.2f e %.2f Ω \n",
               R / 1000, R_max / 1000, R_min / 1000);
      }
      if (R < 1000) {

        printf("\n Resisitencia = %.2f Ω com variacao entre %.2f e %.2f Ω \n",
               R, R_max, R_min);
      }
    }

    printf("\n Deseja continuar?\n y/n \n");
    scanf("%s", &resp);
  } while (resp == 'y');
  return 0;
}