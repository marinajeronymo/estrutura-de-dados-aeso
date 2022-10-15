/*102.	Leia uma matriz 4 x 4,  imprima a matriz e retorne a localização (linha e a coluna) do maior valor.*/

#include <stdio.h>
#include <stdlib.h>
#include <math.h>

int main(){
  int m[4][4],l,c,maior=0;

  for(l=1;l<=4;l++){
    for(c=1;c<=4;c++){
      printf("Escreva um número:");
      scanf("%d",&m[l][c]);
    }
    }
  for(l=1;l<=4;l++){
    for(c=1;c<=4;c++){
      if(m[l][c]>maior){
        maior=m[l][c];
      }
      }
  }
  for(l=1;l<=4;l++){
    for(c=1;c<=4;c++){
      printf ("%d ",m[l][c]); 
      }
    printf ("\n");
  }
  printf("\nMaior número é m[%d][%d]=%d",l,c,maior);
  
  return 0;
  }