/*65. Faça um programa que receba do usuário um vetor com 10 posições. Em seguida,
deverá ser impresso o maior e o menor elemento do vetor.*/
#include<stdio.h>
#include<stdlib.h>
#include<limits.h>

int main () {
    int C[10], i=0, menor, maior;
    menor= INT_MAX;
    maior= INT_MIN;

    for(i; i<10; i++){
        printf("escreva um numero\n");
        scanf("%d", &C[i]);
        if(menor>C[i]){
            menor= C[i];    
        }
        if(maior<C[i]){
            maior=C[i];
        }
    }
    printf(" o menor e %d\n", menor);
    printf("o maior e %d\n", maior);
    
    return 0;
}