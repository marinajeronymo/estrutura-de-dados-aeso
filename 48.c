//48. Faça uma função que recebe, por parâmetros, a hora de inicio e a hora de término de um jogo, ambas subdivididas em 2 valores distintos: horas e minutos. A função deve retornar a duração do jogo em minutos, considerando que o tempo máximo de duração de um jogo é de 24 horas e que o jogo pode começar em um dia e terminar no outro.


#include<stdio.h>
int jogo(){
 int h1,m1,h2,m2,t;
 printf("Digite a hora e depois os minutos do inicio do jogo\n");
 scanf("%d%d",&h1,&m1);
 printf("digite a hora e depois os minutos do fim do jogo\n");
 scanf("%d%d",&h2,&m2);
 if(h1==h2&&m1==m2)  //considerando que houve jogatina
 t=1140;
 else{
  if(m1>m2){
   if(h1>h2)
   t=(((h2+24)-h1)*60)+((m2+60)-m1);
   else
   t=((h2-h1)*60)+((m2+60)-m1);
  }
  else{
   if(h1>h2)
   t=(((h2+24)-h1)*60)+(m2-m1);
   else
   t=((h2-h1)*60)+(m2-m1);
  }
 }
 return t; 
}
main(){
 int partida;
 partida=jogo();
 printf("Tempo de jogo foi %d minutos",partida);
 return 0;
}