/23. Fazer um programa para receber um número do usuário e decompô-lo em fatores primos/
#include <stdio.h>

int n;       
int fator;   
int mult;    

  printf("Decomponho um numero dado em fatores primos.\n");
  printf("Entre com o numero (> 1) a ser decomposto: ");
  scanf("%d", &n);
  printf("Decomposicao de %d em fatores primos:\n", n);  

  fator = 2;
  while (n > 1) 
    {
      mult = 0;
      while (n % fator == 0) 
        {
          mult ++;
          n = n / fator; 
        }
     printf("%d", fator)
       return (0)
       }