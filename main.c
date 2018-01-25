#include <stdio.h>
#include <stdlib.h>

int main()
{

    /*Programa para Descobrir se o Numero e Primo ou não*/

         int resto,ContadorDeResto,i,a,numero;

         /*estrutura de repetição pode colocar pra repetir quantas vezes quiser no caso coloquei
         pra uma vez mais posso tirar esse comando ou colocar o numero 1 para repetir
         uma vez  logo depois ele pede um numero e vai ser escaneado na variavel numero e claro kkkk
         logo depois o contador de resto vai zerar */
         for (i = 0 ; i <1; i++){
                  printf("Digite um numero:");
                  scanf("%i",&numero);
                  ContadorDeResto = 0 ;

         /*aqui ele recebe o resto da divisão de resto por a  sendo que o "a" no  comando
         for vai de 1 até  numero no caso o numero que o usuario digitou , logo depois se ele encontrar
                  um resto valendo 0 ele contava o contador de resto mais o valor 1 e se no final o contador de
                  resto fosse igual a 2 ele verificava se o numero e primo se não diria não e primo obs..
                  podemos ver isso no comando if ali em baixo*/
                  for(a = 1; a <= numero; a++){
                           resto=numero % a;

                           if(resto == 0) ContadorDeResto = ContadorDeResto + 1;

                  }
                  if(ContadorDeResto == 2){
                           printf("\n %i e primo", numero);
                  } else {

                           printf("\n %i nap primo", numero);
                  }
         }


    getch();

}
