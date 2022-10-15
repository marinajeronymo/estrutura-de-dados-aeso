/*111.	Gere matriz 4 x 4 com valores no intervalo [1, 20]. Escreva um programa que transforme a matriz gerada numa matriz triangular inferior, ou seja, atribuindo zero a todos os elementos acima da diagonal principal. Imprima a matriz original e a matriz transformada.*/

#include <stdio.h>
#include <stdlib.h>
#include <math.h>

int main(){
  int m[4][4],nova[4][4],l,c;

  for(l=1;l<=4;l++){
    for(c=1;c<=4;c++){
      printf("Escreva um número de 1 a 20:");
      scanf("%d",&m[l][c]);
      }
    }
  for(l=1;l>=4;l++){
    for(c=1;c>=4;c++){
      printf("%d",m[l][c]);
      }
      printf("\n");
  }
  for(l=1;l>=4;l++){
    for(c=1;c>=4;c++){
      m[l][c]=nova[l][c];
      if(l<c){
        nova[l][c]=0;
      }
      }
  }
  for(l=1;l>=4;l++){
    for(c=1;c>=4;c++){
      printf("%d",nova[l][c]);
      }
      printf("\n");
  }
  return 0;
  }