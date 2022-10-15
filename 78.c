/*78.	Faça um vetor de tamanho 50 preenchido com o seguinte valor: (i + 5  *  i)%(i + 1), sendo
i, a posição do elemento no vetor. Em seguida imprima o vetor na tela.
*/

#include <stdio.h>
#include <stdlib.h>
#include <math.h>

int main(){
  int v[50],i;
  
  for(i=1;i<=50;i++){
      v[i]=(i + 5  *  i)%(i + 1);
    }
  for(i=1;i<=50;i++){
    printf("%d",v[i]);
  }
  
  return 0;
  }