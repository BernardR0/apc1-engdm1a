// Faça um programa em C que calcule as raízes de uma equação do 2° grau através da fórmula de Bhaskara (-b +/- raiz_quadrada(b² - 4ac)/2a)

#include <stdio.h>
#include <math.h>

int main() {

  int a;
  int b;
  int c;
  
  printf("entre com o valor de a: ");
  int deu_certo = scanf("%i", &a);
  
  printf("entre com o valor de b: ");
  deu_certo = scanf("%i", &b);
  
  printf("entre com o valor de c: ");
  deu_certo = scanf("%i", &c);

  double delta = pow(b,2) - 4 * a * c;
  double raiz1 = (-b + sqrt(delta)) / (2 * a);
  double raiz2 = (-b - sqrt(delta)) / (2 * a);

  printf("As raizes da equação são %f e %f\n", raiz1, raiz2);
  


  return 0;
}