/*22 Escreva um programa que calcule o quociente e
o resto da divisão de dois números inteiros dados, usando apenas as operações de soma e/ou
subtração.
*/

int main() {
 int dividendo, divisor, quo, x,resto; 
  printf("insira um numero inteiro:");
  scanf("%d",&divisor);
  printf("insira outro numero inteiro:");
  scanf("%d",&dividendo);
  
quo = 0;
x = dividendo;
while (x >= divisor){
    x = x - divisor;
    quo= quo + 1;
    resto = x;
}
printf("O resto de %d com %d é %", divisor,dividendo, resto);

  return(0);
  }