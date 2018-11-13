/* 6) Sum square difference
 * AUTHOR: Iago Gade Gusmao Carrazzoni <iagocarrazzoni@gmail.com */

#include <stdio.h>
#include <stdlib.h>
#include <math.h>

#define MAX 100

int main(void)
{
    long i, aux1=0, aux2=0, dif;

    for(i=1; i<=MAX; i++)
    {
        aux1 += i;
        aux2 += pow(i,2);
    }
    aux1 = pow(aux1,2);
    dif = abs(aux1 - aux2);

    printf("soma dos quadrados: %ld\nquadrado da soma: %ld\ndiferenca: %ld\n", aux2, aux1, dif);

    return EXIT_SUCCESS;
}
