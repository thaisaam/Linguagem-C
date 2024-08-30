#include <stdio.h>

int main() {
  //Declarando as variaveis 
  float num1, num2, num3, media;

  //Entrada de dados
  printf("Digite o primeiro numero:");
  scanf("%f", &num1);

  printf("Digite o segundo numero:");
  scanf("%f", &num2);

  printf("Digite o terceiro numero:");
  scanf("%f", &num3);

  //Calculo da media
  media = (num1 + num2 + num3) / 3;

  //Exibindo o resultado
  printf("A media dos tres numeros e: %.2f\n",media);
  return 0;
}