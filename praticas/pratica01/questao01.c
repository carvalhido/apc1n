/*
  Faça um programa em C que calcule a média final a partir da fórmula (0,4 x A1) + (0,6 x A2). Considere A1 e A2 números reais entre 0 a 10.
  */

#include <stdio.h>

int main() {
  float nota_a1 = 5.5f;
  float nota_a2 = 4.0f;

  //ler nota_a1 e nota_02
  
  printf("Entre com a A1 entre 0 e 10: ");
  scanf("%f", &nota_a1);
  printf("Entre com a nota A2 entre 0 e 10: ");
  scanf("%f", &nota_a2);
  
  float media = 0.4 * nota_a1 + 0.6 * nota_a2;

  printf("A media é %f\n", media);
  
    return 0;
}