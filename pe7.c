/* 7) 10001st prime
 * AUTHOR: Iago Gade Gusmao Carrazzoni <iagocarrazzoni@gmail.com */

#include <stdio.h>

#define MAX 10001

void primo(void);

int main(void)
{
    primo();

    return 0;
}

void primo(void)
{
    int i=0, j, num=MAX, primo, aux=1;

    do
    {
        primo=0; /*zerar a variavel primo para cada vez que rodar o laco*/
        aux++;
        for(j=aux; j>0; j--) /*laco interno para ir buscando os numeros primos*/
        {
            if(aux%j==0) /*se o resto da divisao de aux/j for = 0, a variavel primo eh incrementada*/
                primo++;
        }
        if(primo==2) /*para ser um numero primo, o numero so eh dividido 2 vezes, por 1 e por ele mesmo*/
            i++;
    }
    while(i<num); /*condicao para rodar o laco a quantidade de vezes desejada*/

    printf("pe7: %d\n", aux);

    return;
}
