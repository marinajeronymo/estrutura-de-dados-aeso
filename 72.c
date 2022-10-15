/*72.	Fazer um programa para ler 5 valores e, em seguida, mostrar a posição onde se encontram o maior e o menor valor.*/

#include <stdio.h>
#include <stdlib.h>
#include <math.h>

int main(){
  int v[5], maior=0,menor=9999,i, pMenor, pMaior;
  
  for(i=1;i<=5;i++){
    printf("número:");
    scanf("%d",v[i]);
    }
  for(i=1;i<=5;i++){
    if(v[i]>maior){
      maior=v[i];
      pMaior=i;
    }
    if(v[i]<menor){
      menor=v[i];
      pMenor=i;
    }
  }
  printf("Posição maior=%d e valor=%d",pMaior,maior);
  printf("Posição menor=%d e valor=%d",pMenor,menor);

  return 0;
  }