/* 25Fazer um programa para receber dois números inteiros do usuário e mostrar o
seu MMC (mínimo múltiplo comum).*/

#include <stdio.h>
#include<stdlib.h>
int main() {
int num1, num2,mmc, i,aux;
  printf("insira um numero inteiro:");
  scanf("%d",&num1 );
  printf("insira outro numero inteiro:");
  scanf("%d",&num2 );

 for (i = 2; i <= num2; i++) {
     aux = num1 * i;
   }
 if ((aux % num2) == 0) {
     mmc = aux;
     i = num2 + 1;
   }
  printf("o mmc é %d",mmc);  
    return 0;
}