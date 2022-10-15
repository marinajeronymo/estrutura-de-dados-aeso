/*99.	Leia uma matriz 4 x 4, conte e escreva quantos valores maiores que 10 ela possui.*/

#include <stdio.h>
#include <stdlib.h>
#include <math.h>

int main(){
  int m[4][4],l,c,maior10=0;

  for(l=1;l<=4;l++){
    for(c=1;c<=4;c++){
      printf("Escreva um número:");
      scanf("%d",&m[l][c]);
      if(m[l][c]>10){
        maior10++;
        }
      }
    }
  printf("Qtd maiores que 10=%d",maior10);
    
  
  return 0;
  }