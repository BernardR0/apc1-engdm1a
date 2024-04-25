#include <stdio.h>   

int main () {
  float nota1;
  float nota2;

  printf("Informe a nota 1: ");
  int deu_certo = scanf("%f", &nota1);

  int nota1_é_valida = nota1 >= 0.0f && nota1 <= 10.0f;
  if (nota1_é_valida) {
    printf("entre com a nota 2: ");
    deu_certo = scanf("%f", &nota2);
    
    int nota2_é_valida = nota2 >= 0.0f && nota2 <= 10.0f;
    if (nota2_é_valida) {
      float media = 0.4f * nota1 + 0.6f * nota2;
      printf("a sua média é:%f\n",media);

     if (media >= 9.0f && media <= 10.0f) {
        printf("A menção é SS\n");
       }else if (media >= 7.0f && media < 8.9f) {
       printf("A menção é MS\n");
       }else if (media >= 5.0f && media < 6.9f) {
       printf("A menção é MM\n");
       }else if (media >= 3.0f && media < 4.9f) {
       printf("A menção é MI\n");
       }else if (media >= 0.1f && media < 2.9f) {
       printf("A menção é II\n");
       }else if (media == 0.0f) {
       printf("A menção é SR, se fodeu\n");
       }
    }else {
      printf("Nota 2 invalida, entre com um valor entre 0.0 e 10.0\n");
    }
  } else {
    printf("Nota 1 invalida, entre com um valor entre 0.0 e 10.0\n");
  } 





  return 0;
}