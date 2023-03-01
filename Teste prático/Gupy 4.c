
/*
SP – R$67.836,43
RJ – R$36.678,66
MG – R$29.229,88
ES – R$27.165,48
Outros – R$19.849,53

Escreva um programa na linguagem que desejar onde calcule o percentual de representação que cada estado teve dentro do valor total mensal da distribuidora.
p = (x/y) * 100;
*/

#include <stdio.h>

int main(void) {
  float SP = 67836.43, RJ = 36678.66 , MG = 29229.88,
  ES = 27165.48, OT = 19849.53;

  printf("Digite o faturamento do estado de SP: ");
  scanf ("%f", &SP);
  printf("Digite o faturamento do estado de RJ: ");
  scanf ("%f", &RJ);
  printf("Digite o faturamento do estado de MG: ");
  scanf ("%f", &MG);
  printf("Digite o faturamento do estado de ES: ");
  scanf ("%f", &ES);
  printf("Digite o faturamento dos outros estados: ");
  scanf ("%f", &OT);

  float total = SP  + RJ + MG + ES + OT;
  

  float SP_porc = ( SP/ total) * 100;
  float RJ_porc = ( RJ / total ) * 100;
  float MG_porc = ( MG / total ) * 100;
  float ES_porc = ( ES / total ) * 100;
  float OT_porc = ( OT / total ) * 100;
  
  printf("\n Porcentagem de SP: %.2f", SP_porc);
  printf("\n Porcentagem de RJ: %.2f", RJ_porc);
  printf("\n Porcentagem de MG: %.2f", MG_porc);
  printf("\n Porcentagem de ES: %.2f", ES_porc);
  printf("\n Porcentagem de outros estados: %.2f",OT_porc);
  
}