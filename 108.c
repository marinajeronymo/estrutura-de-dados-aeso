/*108.	Leia uma matriz de 3 x 3 elementos. Calcule a soma dos elementos que estão na diagonal principal.*/

#include <stdio.h>
#include <stdlib.h>
#include <math.h>

int main(){
  int m[3][3],l,c,somaDp=0;

  for(l=1;l<=3;l++){
    for(c=1;c<=3;c++){
      printf("Escreva um número:");
      scanf("%d",&m[l][c]);
      if(l==c){
        somaDp+=m[l][l];
      }
    }
    }
  printf("\nSoma da diagonal principal:%d\n",somaDp);
  }