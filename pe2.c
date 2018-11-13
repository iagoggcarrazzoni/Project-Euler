/* 2) Even Fibonacci numbers
 * AUTHOR: Iago Gade Gusmao Carrazzoni <iagocarrazzoni@gmail.com */

#include <stdio.h>
#include <stdlib.h>

#define MAX 4000000

int main(void)
{
    long n1, n2, n3;
    long res;

    n1 = 1;
    n2 = 2;
    res = 2;

    do
    {
        n3 = n1 + n2;
        if(!(n3%2)) /* n3%2 == 0 */
            res +=  n3;
        n1 = n2;
        n2 = n3;

    }while(n2<MAX);

    printf("pe2: %ld\n", res);

    return EXIT_SUCCESS;
}
