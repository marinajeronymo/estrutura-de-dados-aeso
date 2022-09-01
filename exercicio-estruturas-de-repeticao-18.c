/*18.	Fazer um programa para mostrar os 15 primeiros termos da série de Fibonacci*/

#include <stdio.h>
#include <stdlib.h>

int main(int argc, char const *argv[])
{
    int num=1,cont=3,fib;

    while (cont<=17)
    {
        if (num==1||num==2)
        {
            printf("1 ");
        }else{
            fib=(num-1)+(num-2);
            printf(" %d",fib);
        }
        num++;
        cont++;
    }
    
    return 0;
}
//Fn = Fn - 1 + Fn - 2


