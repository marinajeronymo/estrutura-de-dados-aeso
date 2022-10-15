/*68.	Crie um programa que lê 6 valores inteiros pares e, em seguida, mostre na tela os valores lidos na ordem inversa.*/

#include <stdio.h>
#include <stdlib.h>
#include <math.h>

int main(){
  int v[6],i;

  for(i=1;i<=6;i++){
    printf("Escreva um número par:");
    scanf("%d",&v[i]);
    }
  printf("Ordem inversa:");
  for(i=5;i>=0;i--){
    printf("%d",v[i]);
    }
  
  return 0;
    }