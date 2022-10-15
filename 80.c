//80. Faça um programa que receba do usuário dois vetores, A e B, com 10 números inteiros cada. Crie um novo vetor denominado C calculando C = A - B. Mostre na tela os dados do vetor C.

#include <stdio.h>

#include <stdlib.h>

int main(int argc, char *argv[]) {  

int vetA[10];

int vetB[10];

int vetC[10];

int i ;    

for (i=0; i<10; i++){  // Recebe valores do Vetor A

 printf("Digite um valor inteiro: ");

 scanf ("%d",&vetA[i]);

}

printf("\n");  // Quebra linha

for (i=0; i<10; i++){ // Recebe valores do Vetor B  

 printf("Digite um valor inteiro (b): ");

 scanf ("%d",&vetB[i]);

}

printf("\n");  // Quebra linha

for (i=0; i<10; i++){  

 vetC[i] = vetA[i] - vetB[i];

 printf("Vetor A - Vetor B e igual: %d\n", vetC[i]);

}

}