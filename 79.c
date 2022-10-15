/*79.	Escreva um programa que leia números inteiros no intervalo [0,50] e os armazene em um vetor com 10 posições.  Preencha um segundo vetor apenas com os números ímpares do primeiro vetor. Imprima os dois vetores, 2 elementos por linha.
*/

#include <stdio.h>
#include <stdlib.h>
#include <math.h>

int main(){
  int v[10],impar[10],i;
  
  for(i=1;i<=10;i++){
      printf("Escreva um número de 0 a 50:");
      scanf("%d",&v[i]);
      if(v[i]%2!=0){
        impar[i]=v[i];
      }
    }
  printf("\nVetor original:");
  for(i=1;i<=10;i++){
    printf("%d",v[i]);
  }
  printf("\nVetor ímpares:");
  for(i=1;i<=10;i++){
    printf("%d",impar[i]);
  }
  
  return 0;
  }