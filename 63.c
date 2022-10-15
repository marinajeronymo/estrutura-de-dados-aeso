/*63.	Faça um programa que leia um vetor de 8 posições e, em seguida, leia também dois valores X e Y  quaisquer correspondentes a duas posições no vetor. Ao final, seu programa deverá escrever a soma dos valores encontrados nas respectivas posições X  e Y .*/

#include <stdio.h>
#include <stdlib.h>
#include <math.h>

int main(){
  int v[8],x,y,i,soma,num1,num2;

  for(i=1;i<=8;i++){
    printf("Escreva um número:");
    scanf("%f",&v[i]);
    }
  printf("\nEscreva um número:");
  scanf("%d",&x);
  printf("\nEscreva um número:");
  scanf("%d",&y);
  
  for(i=1;i<=8;i++){
    if(x==i){
      num1=v[i];
    }
    if(y==i){
      num2=v[1];
    }
    }
    soma=num1+num2;
    printf("A soma é=%d",soma);
  
  return 0;
    }