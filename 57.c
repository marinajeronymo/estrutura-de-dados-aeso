
//57.Crie uma função recursiva que receba um número inteiro positivo N e calcule o somatório dos números de 1 a N.

#include <stdio.h>
int soma(int valor){
    if(valor == 0){
        return 0;
    }else{
        return valor + soma(valor -1);
     }
}
    main(){
    int num=0, i=0, r=0;
   
    printf("Digite o numero\n");
    scanf("%d", &num);
    r=soma(num);
    printf("Valor somado %d\n", r);
    return 0;
}
