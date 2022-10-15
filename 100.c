/*100.	Declare uma matriz 5 x 5. Preencha com 1 a diagonal principal e com 0 os demais elementos. Escreva ao final a matriz obtida.*/

#include <stdio.h>
#include <stdlib.h>
#include <math.h>

int main(){
  int m[5][5],l,c;

  for(l=1;l<=5;l++){
    for(c=1;c<=5;c++){
      if(l==c){
        m[l][c]=1;
      }else{
        printf("insira um valor:");
        scanf("%d",&m[l][c]);
      }
    }
    }
  for(l=1;l<=5;l++){
    for(c=1;c<=5;c++){
      printf ("%d ",m[l][c]); 
      }
    printf ("\n");
  }
  
  return 0;
  }