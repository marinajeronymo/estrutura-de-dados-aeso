/*9.	Fazer um programa para solicitar ao usuário um número entre 0 e 99 e mostrar este número por extenso. Se o usuário introduzir um número que não está neste intervalo, mostre: "número inválido".*/
#include <stdio.h>
#include <stdlib.h>

int main(int argc, char const *argv[])
{
    int numero;

    printf("Escreva um número de 0 a 99: ");
    scanf("%d",&numero);
    

    switch (numero)
    {
    case 1:
        printf("número um");
        break;
    case 2:
        printf("número dois");
        break;
    case 3:
        printf("número três");
        break;
    case 4:
        printf("número quatro");
        break;
    case 5:
        printf("número cinco");
        break;
    case 6:
        printf("número seis");
        break;
    case 7:
        printf("número sete");
        break;
    case 8:
        printf("número oito");
        break;
    case 9:
        printf("número nove");
        break;
    case 10:
        printf("número dez");
        break;
    case 11:
        printf("número onze");
        break;
    case 12:
        printf("número doze");
        break;
    case 13:
        printf("número treze");
        break;
    case 14:
        printf("número quatorze");
        break;
    case 15:
        printf("número quinze");
        break;
    case 16:
        printf("número dezesseis");
        break;
    case 17:
        printf("número dezessete");
        break;
    case 18:
        printf("número dezoito");
        break;
    case 19:
        printf("número dezenove");
        break;
    case 20:
        printf("número vinte");
        break;
    case 21:
        printf("número vinte e um");
        break;
    case 22:
        printf("número vinte e dois");
        break;
    case 23:
        printf("número vinte e três");
        break;
    case 24:
        printf("número vinte e um");
        break;
    case 25:
        printf("número vinte e cinco");
        break;
    case 26:
        printf("número vinte e seis");
        break;
    case 27:
        printf("número vinte e sete");
        break;
    case 28:
        printf("número vinte e oito");
        break;
    case 29:
        printf("número vinte e nove");
        break;
    case 30:
        printf("número trinta");
        break;
    case 31:
        printf("número trinta e um");
        break;
    case 32:
        printf("número trinta e dois");
        break;
    case 33:
        printf("número trinta e três");
        break;
    case 34:
        printf("número trinta e quatro");
        break;
    case 35:
        printf("número trinta e cinco");
        break;
    case 36:
        printf("número trinta e seis");
        break;
    case 37:
        printf("número trinta e sete");
        break;
    case 38:
        printf("número trinta e oito");
        break;
    case 39:
        printf("número trinta e nove");
        break;
    case 40:
        printf("número quarenta");
        break;
    case 41:
        printf("número quarenta e um");
        break;
    case 42:
        printf("número quarenta e dois");
        break;
    case 43:
        printf("número quarenta e três");
        break;
    case 44:
        printf("número quarenta e quatro");
        break;
    case 45:
        printf("número quarenta e cinco");
        break;
    case 46:
        printf("número quarenta e seis");
        break;
    case 47:
        printf("número quarenta e sete");
        break;
    case 48:
        printf("número quarenta e oito");
        break;
    case 49:
        printf("número quarenta e nove");
        break;
    default:
        printf("Número inválido");
        break;
    }

    return 0;
}
