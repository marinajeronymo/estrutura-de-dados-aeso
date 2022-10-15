#include <stdio.h>

/*64. Leia um vetor de 10 posições.Contar e escrever quantos
valores pares ele possui.*/

int main() {

int numeros[10],par=0,contador=0;

for(int i=0;i<10;i++){
    printf("Informe um valor inteiro:");
    scanf("%d",&numeros[i]);
}
for(int i=0;i<10;i++){
    if(numeros[i]%2==0){
    par++;
    }
}
    printf("O total de números pares é:%d",par);

    return 0;
}