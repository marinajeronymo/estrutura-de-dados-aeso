/*71.	Fazer um programa para ler 5 valores e, em seguida, mostrar todos os valores lidos juntamente com o maior, o menor e a média dos valores.*/

#include <stdio.h>
#include <stdlib.h>
#include <math.h>

int main(){
  int v[5], maior=0,menor=9999,i;
  float soma=0, media;
  
  for(i=1;i<=5;i++){
    printf("número:");
    scanf("%d",v[i]);
    soma+=v[i];
    printf("%d",v[i]);
    if(v[i]>maior){
      maior=v[i];
    }
    if(menor<menor){
      menor=v[i];
    }
  }
  
  media=soma/5;
  printf("\nMaior:%d",maior);
  printf("\Menor:%d",menor);
  printf("\nMaior:%.2f",media);

  return 0;
  }