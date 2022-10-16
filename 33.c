/* 33. Fazer um programa para encontrar todos os pares de números amigáveis entre 1 e 100000. Um par de números é amigável quando cada um deles é igual à soma dos divisores do outro. */

#include <stdio.h>
int main ()
{
    int n1, divisor, r, soma1 = 0, somareal;
    int n2, divisor2, r2, soma2 = 0,somareal2;
    
    for (n1 = 1, n2 = 1; n1 <= 1000; n1++, n2++)
    {        
        for (divisor = 1, divisor2 = 1; divisor <= 1000; divisor++, divisor2++)
        {            
            if (n1 % divisor == 0)
            {
                r = n1 / divisor;
                soma1 += divisor;
                //printf("\nN1 = %d\t DIVISOR = %d\t N1 / DIVISOR = %d\n",n1, divisor, r);
            }
            if (n2 % divisor2 == 0)
            {
                r2 = n2 / divisor2;
                soma2 +=divisor2;
                //printf("\nN2 = %d\t DIVISOR2 = %d\t N2 / DIVISOR2 = %d SOMA = %d\n",n2, divisor2, r2, soma2);
            }
            
        }
        somareal = soma1 - n1;
        somareal2 = soma2 - n2;
        //printf("\nSOMA: %d\n",somareal);
        //printf("SOMA2: %d\n",somareal2);
        if (n1 == somareal2 && n2 == somareal)
        {
            printf("N1 %d e SOMA2 %d         ",n1,somareal2);
            printf("N2 %d e SOMA %d            são NUMEROS AMIGOS!\n",n2,somareal);
        }
        //printf("\n--------------------------------------------\n");
        soma1 = 0;
        soma2 = 0;
        }
    
    
    return 0;
}