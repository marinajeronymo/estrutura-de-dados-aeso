/*120.	Faça um programa que leia duas matrizes A e B de tamanho 3 x 3 e calcule C  = A ∗ B.*/

#include <stdio.h>
#include <stdlib.h>
#include <math.h>

int main(){
  int a[3][3],b[3][3],c[3][3],l,col;

  for(l=1;l<=3;l++){
    for(col=1;col<=3;col++){
      printf("número:");
      scanf("%d",&a[l][col]);
    }
  }

  for(l=1;l<=3;l++){
    for(col=1;col<=3;col++){
      printf("número:");
      scanf("%d",&b[l][col]);
    }
  }
  for(l=1;l<=3;l++){
    for(col=1;col<=3;col++){
      c[l][col]=a[l][col]*b[l][col];
    }
  }
 
  return 0;
  }