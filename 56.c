//56. Escreva uma função recursiva que calcule a soma dos dígitos de um número inteiro. Por exemplo, se a entrada for 123, a saída deverá ser 1+2+3 = 6.

#include
#include
using namespace std;

int soma_digitos (int num)
{
int a,b;

a = num % 10;

b = (num – a)/10;

if (b <= 0)
{
return a;
}
else
{

return a + soma_digitos(b);
}
}

void main()
{
setlocale(LC_ALL,”Portuguese”);
int n, soma;

cout<<“Soma dos dígitos de um número”<<endl;
cout<<“Informe o número: “; cin>> n;

soma = soma_digitos(n);
cout<< “A soma dos dígitos do número ” <<n<< ” é: ” <<soma<<endl;


return 0;
}