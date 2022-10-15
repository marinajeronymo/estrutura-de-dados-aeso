/*62.	Ler um conjunto de números reais, armazenando-o em vetor e calcular o quadrado das componentes deste vetor, armazenando o resultado em outro vetor.  Os conjuntos têm 10 elementos cada. Imprimir todos os conjuntos..*/

#include <stdio.h>
#include <stdlib.h>
#include <math.h>

int main(){
  float V[10],quadrado[10];
  int i;

  for(i=1;i<=10;i++){
    printf("Escreva um número:");
    scanf("%f",&V[i]);
  }
  printf("\nVetor original:");
  for(i=1;i<=10;i++){
    printf("\n %.2f",V[i]);
    }
  for(i=1;i<=10;i++){
    quadrado[i]=pow(V[i],2);
    }
  printf("\nQuadrado dos componentes:");
  for(i=1;i<=10;i++){
    printf("\n %.2f",quadrado[i]);
    }
  return 0;
}