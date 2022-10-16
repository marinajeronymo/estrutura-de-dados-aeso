82. 
Ler dois conjuntos de números reais, armazenando-os em vetores e calcular o produto escalar entre eles. Os conjuntos têm 5 elementos cada. Imprimir os dois conjuntos e o produto escalar, sendo que o produto escalar é dado por: x1 ∗y1 + x2 ∗y2 + ... + xn ∗yn


#include<stdio.h>

void main(){

  int i;
  float x[5], y[5];

  printf("\nInforme os números do vetor x:");
  for(i=0;i<5;i++){
    scanf("%f", &x[i]);
  }
	
	printf("\nInforme os números do vetor y:");
  for(i=0;i<5;i++){
    scanf("%f", &y[i]);
  }
   printf("\n\n números do vetor x:");
  for(i=0;i<5;i++){
    printf("%.2f", x[i]);
  }
	
	printf("\n números do vetor y:");
  for(i=0;i<5;i++){
    printf("%.2f", y[i]);
  }
    return 0;
  }