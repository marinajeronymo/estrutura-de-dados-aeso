/*66.	Escreva um programa que leia 10 números inteiros e os armazene em um vetor. Imprima o vetor, o maior elemento e a posição que ele se encontra.*/

#include <stdio.h>
#include <stdlib.h>
#include <math.h>

int main(){
  int v[10], max=0, min=9999,i;

  for(i=1;i<=10;i++){
    printf("Escreva um número:");
    scanf("%d",&v[i]);
    }
  for(i=1;i<=10;i++){
    if(v[i]>max){
      max=v[i];
    }
    if(v[i]<min){
      min=v[i];
    }
    }
  printf("O maior valor está na posição %d e é=%d",i,v[i]);
  return 0;
    }