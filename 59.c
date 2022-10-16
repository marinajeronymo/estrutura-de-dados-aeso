/* 59) Dado um número n na base decimal, escreva uma função recursiva em C que converte este número para binário. */

#include <conio.h>
#include <stdio.h>
#include <stdlib.h>

int main(){

int converteParaBinario(int n){
    if (n < 2) // Tirado de
        return n;
    return ( 10 * converteParaBinario( n / 2 ) ) + n % 2;
}