/*43. Fazer uma função situacao_aluno que:
recebe como parâmetros: média final do aluno (0 a 100), número de faltas e quantidade de horas-aula no semestre
retorna 1 se o aluno foi aprovado, de acordo com os critérios da UTFPR, e 0 caso contrário.

Critérios: média final maior ou igual a 60 e frequência maior ou igual a 75%

Fazer o teste da chamada desta função no main, recebendo valores relativos a um aluno e informando se ele foi aprovado ou não.*/
#include <stdio.h>
#include <stdlib.h>
#define LIMITE_FALTAS 0.25

int situacao_aluno(float media, int falta, int horaAula){
  float percFalta=(falta+0.0)/horaAula;
  printf("%f",percFalta);
  if((media>=60.0)&&(percFalta>=0.25)){
    return 1;
  }else{
    return 0;
  }

}
 
int main(){
  int horaAula, falta;
  float media;
  printf("Escreva a média:");
  scanf("%f",&media);
  printf("\nEscreva o número de Horas-Aulas:");
  scanf("%d",&horaAula);
  printf("\nEscreva o número de faltas:");
  scanf("%d",&falta);

  printf("Resultado:%d",situacao_aluno(media,falta,horaAula));
  return 0;
}
