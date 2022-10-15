/* 52. Escreva a função para cálculo do N-ésimo termo da série de Fibonacci utilizando recursividade.*/

#include <stdio.h>
#include <stdlib.h>

int fibonacci(int n) {
	if(n < 2) {
		return 1;
	}
	return fibonacci(n - 1) + fibonacci(n - 2);
}