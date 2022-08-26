/*9.	Fazer um programa para solicitar ao usuário um número entre 0 e 99 e mostrar este número por extenso. Se o usuário introduzir um número que não está neste intervalo, mostre: "número inválido".*/
#include <stdio.h>
#include <stdlib.h>

int main(int argc, char const *argv[])
{
    int numero;

    printf("Escreva um número de 0 a 99");
    scanf("%d",&numero);
    

    switch (numero)
    {
    case '1':
        printf("número um");
        break;
    case '2':
        printf("número dois");
        break;
    case '3':
        printf("número três");
        break;
    case '4':
        printf("número quatro");
        break;
    case '5':
        printf("número cinco");
        break;
    case '6':
        printf("número seis");
        break;
    case '7':
        printf("número sete");
        break;
    case '8':
        printf("número oito");
        break;
    case '9':
        printf("número nove");
        break;
    case '10':
        printf("número nove");
        break;
    default:
        printf("Número inválido");
        break;
    }

    return 0;
}
