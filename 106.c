/*106.	Leia uma matriz de 3 x 3 elementos. Calcule a soma dos elementos que estão acima da diagonal principal.*/

#include <stdio.h>
#include <stdlib.h>
#include <math.h>

int main(){
  int m[3][3],l,c,somaAdp=0;

  for(l=1;l<=3;l++){
    for(c=1;c<=3;c++){
      printf("Escreva um número:");
      scanf("%d",&m[l][c]);
      if(l<c){
        somaAdp+=m[l][l];
      }
    }
    }
  printf("\nSoma acima da diagonal principal:%d\n",somaAdp);
  }