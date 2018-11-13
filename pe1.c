/* 1) Multiples of 3 and 5
 * AUTHOR: Iago Gade Gusmao Carrazzoni <iagocarrazzoni@gmail.com */

#include <stdio.h>

#define MAX 1000

void multiplo_3_ou_5(void);

int main(void)
{
    multiplo_3_ou_5();

    return 0;
}

void multiplo_3_ou_5(void)
{
    int soma=0, i, mult[MAX]={0}, aux=0;

    for(i=0; i<MAX; i++) /* laco para guardar os numeros multiplos de 3 e 5 */
    {
        if((i%3==0) || (i%5==0))
            mult[i]=i;
    }
    for(i=0; i<MAX; i++) /* laco para somar os multiplos de 3 e 5 */
    {
        soma = aux + mult[i];
        aux = soma;
    }
    printf("pe1: %d\n", soma);

    return;
}
