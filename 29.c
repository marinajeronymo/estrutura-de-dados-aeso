/*29.	Fazer um programa no qual o usuário vai entrando sucessivamente com valores positivos. Quando o usuário entrar com um valor negativo o programa para de pedir valores e calcula a média dos valores já fornecidos.*/
#include <stdio.h>
#include <stdlib.h>

int main(){
  float num=0, media, soma=0;
  int cont=0;
  
  while(num>=0){
    printf("Escreva um número positivo:");
    scanf("f",&num);
    
    if(num>=0){
      soma=soma+num;
      cont++;
    }
  }

  media=soma/cont;
  printf("A média dos números é: %.2f",media);
  
  return 0;
}