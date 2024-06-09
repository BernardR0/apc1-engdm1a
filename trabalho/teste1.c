#include <stdio.h>
#include <math.h>
#include <string.h>
#include <stdlib.h>



int main() {
    enum unidade_e {
        preto = 0,
        marrom = 1,
        vermelho = 2,
        laranja = 3,
        amarelo = 4,
        verde = 5,
        azul = 6,
        violeta = 7,
        cinza = 8,
        branco = 9,
        dourado = -1,
        prata = -2
    };

    struct resistor_t {
        int quantidade_de_cores;
        enum unidade_e cores[5];
        float resistencia;
        float resistencia_maxima;
        float resistencia_minima;
    };

    int escolha;
    do {

        printf("Calculadora de Resistência de Resistor\n");
        printf("1. Calcular resistência de resistor\n");
        printf("2. Sair\n");
        printf("Escolha uma opção: ");
        int deu_certo = scanf("%d", &escolha);

        if (deu_certo != 1) {
            printf("Entrada inválida! Tente novamente.\n");
            while (getchar() != '\n'); // Limpa o buffer de entrada
            continue;
        }

        if (escolha == 1) {
            int numero_de_faixas;
            struct resistor_t resistor;

            printf("O resistor tem 4 ou 5 cores? ");
            deu_certo = scanf("%d", &numero_de_faixas);

            if (deu_certo != 1 || (numero_de_faixas != 4 && numero_de_faixas != 5)) {
                printf("Número de faixas inválido!\n");
                while (getchar() != '\n'); // Limpa o buffer de entrada
                continue;
            }

            resistor.quantidade_de_cores = numero_de_faixas;

            for (int i = 0; i < numero_de_faixas; i++) {
                char cor[10];
                printf("Digite a cor da faixa %d: ", i + 1);
                deu_certo = scanf("%9s", cor);

                if (strcmp(cor, "preto") == 0) resistor.cores[i] = preto;
                else if (strcmp(cor, "marrom") == 0) resistor.cores[i] = marrom;
                else if (strcmp(cor, "vermelho") == 0) resistor.cores[i] = vermelho;
                else if (strcmp(cor, "laranja") == 0) resistor.cores[i] = laranja;
                else if (strcmp(cor, "amarelo") == 0) resistor.cores[i] = amarelo;
                else if (strcmp(cor, "verde") == 0) resistor.cores[i] = verde;
                else if (strcmp(cor, "azul") == 0) resistor.cores[i] = azul;
                else if (strcmp(cor, "violeta") == 0) resistor.cores[i] = violeta;
                else if (strcmp(cor, "cinza") == 0) resistor.cores[i] = cinza;
                else if (strcmp(cor, "branco") == 0) resistor.cores[i] = branco;
                else if (strcmp(cor, "dourado") == 0) resistor.cores[i] = dourado;
                else if (strcmp(cor, "prata") == 0) resistor.cores[i] = prata;
                else {
                    printf("Cor inválida!\n");
                    break;
                }
            }

            int valor_base = 0;
            float multiplicador = 1;
            float tolerancia = 0;

            if (numero_de_faixas == 4) {
                valor_base = resistor.cores[0] * 10 + resistor.cores[1];
                multiplicador = pow(10, resistor.cores[2]);
                tolerancia = (resistor.cores[3] == dourado) ? 5 : (resistor.cores[3] == prata) ? 10 : 0;
            } else {
                valor_base = resistor.cores[0] * 100 + resistor.cores[1] * 10 + resistor.cores[2];
                multiplicador = pow(10, resistor.cores[3]);
                tolerancia = (resistor.cores[4] == dourado) ? 5 : (resistor.cores[4] == prata) ? 10 : 0;
            }

            resistor.resistencia = valor_base * multiplicador;
            resistor.resistencia_maxima = resistor.resistencia * (1 + tolerancia / 100);
            resistor.resistencia_minima = resistor.resistencia * (1 - tolerancia / 100);

            printf("Resistência: %.2f ohms\n", resistor.resistencia);
            printf("Resistência máxima: %.2f ohms\n", resistor.resistencia_maxima);
            printf("Resistência mínima: %.2f ohms\n", resistor.resistencia_minima);
            printf("Pressione Enter para continuar...");
            while (getchar() != '\n'); // Aguarda o usuário pressionar Enter
            getchar();
        } else if (escolha != 2) {
            printf("Opção inválida! Tente novamente.\n");
        }

    } while (escolha != 2);

    printf("Saindo...\n");
    return 0;
}


