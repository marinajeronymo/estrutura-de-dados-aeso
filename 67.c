/*67.  Crie um programa que lê 6 valores inteiros e, em seguida, mostre na tela os valores lidos na ordem inversa.*/

#include<stdio.h> int main(){
int valor[6], i;
for(i=0; i<6; i++){
printf("Qual o valor?\n ");
scanf("%d", &valor[i]);
}
printf("\nO ordem inversa dos valores entrados e:\n");
for(i=0; i<6; i++) {printf("%d\n", valor[5-i]);
  }
  return 0;
}