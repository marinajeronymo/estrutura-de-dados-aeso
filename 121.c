//121. Faça um programa que leia uma matriz A de tamanho 3 x 3 e calcule B = A2.

#include <stdlib.h>

#include <stdio.h>

int main(){

int matriz_A[3][3], matriz_B[3][3], i, j;

//matriz_A

for(i = 0; i < 3; ++i){

 for(j = 0; j < 3; ++j){

   printf("matriz_A[%d][%d]: ", i, j);

   scanf("%d", &matriz_A[i][j]);

 }

}

printf("\n");

//matriz_B

 for(i = 0; i < 3; ++i){

  for(j = 0; j < 3; ++j){

    matriz_B[i][j] = 2 * matriz_A[i][j];

    printf("%d\t", matriz_B[i][j]);

     if(j==4) printf("\n");

  }

 }

return 0;

}