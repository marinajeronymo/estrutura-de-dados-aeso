/*60.	Faça um programa que possua um vetor denominado A que armazene 6 números inteiros. O programa deve executar os seguintes passos:
(a)	Atribua os seguintes valores a esse vetor: 1, 0, 5, -2, -5, 7.
(b)	Armazene em uma variável inteira (simples) a soma entre os valores das posições
A[0], A[1] e A[5] do vetor e mostre na tela esta soma.
(c)	Modifique o vetor na posição 4, atribuindo a esta posição valor 100.
(d)	Mostre na tela cada valor do vetor A, um em cada linha.
*/

#include <stdio.h>
#include <stdlib.h>

int main (){
  //letra a
  int A[6]={1,0,5,-2,-5,7},i;
  //letra b
  int soma=A[0]+A[1]+A[5];
  //letra c
  A[4]=100;
  printf("A soma dos números das posições 0,1,5=%d",soma);
  //letra d
  printf("\nElementos do Vetor:");
  for(i=0;i<=5;i++){
    printf("\n%d",A[i]);
  }
  return(0);
}