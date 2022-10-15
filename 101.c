/*101.	Faça um programa que preenche uma matriz 4 x 4 com o produto do valor da linha e da coluna de cada elemento. Em seguida, imprima na tela a matriz.*/

#include <stdio.h>
#include <stdlib.h>
#include <math.h>

int main(){
  int m[4][4],l,c;

  for(l=1;l<=4;l++){
    for(c=1;c<=4;c++){
      m[l][c]=l*c;
    }
    }
  for(l=1;l<=4;l++){
    for(c=1;c<=4;c++){
      printf ("%d ",m[l][c]); 
      }
    printf ("\n");
  }
  
  return 0;
  }