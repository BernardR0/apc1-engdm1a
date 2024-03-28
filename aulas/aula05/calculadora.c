#include <stdio.h>
#include <math.h>

int main() {
  int numero1;
  int numero2;

  printf("entre com o primeiro número:");
  int deu_certo = scanf("%i", &numero1);

  printf("entre com o segundo número:");
  deu_certo = scanf("%i", &numero2);
  
  int soma = numero1 + numero2;
  printf("a soma dos numeros e´%i\n", soma);

  int subtracao = numero1 - numero2;
  printf("a subtracao dos numeros é %i\n", subtracao);

  int multiplicacao = numero1 * numero2;
  printf("a multiplicacao dos numeros é %i\n",multiplicacao);

  float divisao = 1.0f * numero1 / numero2;
  printf("A divisão dos numeros é %f\n", divisao);
  int resto = numero1 % numero2;
  printf("O resto da divisão é %i\n", resto);

   // numero1 = numero1 + 1;
   // incremento
  printf("O incremento do primeiro número é %i\n", numero1++);
  printf("O incremento do primeiro número é %i\n", ++numero1);
    
  // numero1 - numero 1 - 1
  // decremento
  printf("O decremento do primeiro número é %i\n", numero1--);
  printf("O decremento do primeiro número é %i\n", --numero1);

  double raiz_quadrada = sqrt(numero1);
  printf("a raiz quadrada do primeiro numero é %f\n", raiz_quadrada);

  double potencia = pow(numero1, 3);
  printf("A 3a potencia do primeiro numero é %f\n", potencia);

  double logaritmo2 = log2(numero1);
  printf("O log2 do primeiro numero é %f\n", logaritmo2);
  const double PI = 3.1416;
  double seno = sin(numero1 * (PI / 180));
  printf("O seno do primeiro numero é %f\n", seno);

  double cosseno = cos(numero1 * (PI / 180));
  printf( "O cosseno do primeiro numero é %f\n", cosseno);

  double tangente = tan(numero1 * (PI / 180));
  printf( "A tangente do primeiro numero é %f\n", tangente);
  
  
  return 0;
}