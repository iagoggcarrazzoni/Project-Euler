/* 5) Smallest multiple
 * AUTHOR: Iago Gade Gusmao Carrazzoni <iagocarrazzoni@gmail.com */

#include <stdio.h>
#include <stdlib.h>

#define MAX 1000000000

int main(void)
{
    long i;

    for(i=1; i<=MAX; i++)
    {
       /* if(i%1==0 && i%2==0 && i%3==0 && i%4==0 && i%5==0 && i%6==0 && i%7==0 && i%8==0 && i%9==0 && i%10==0) */
        if(!(i%1) && !(i%2) && !(i%3) && !(i%4) && !(i%5) && !(i%6) && !(i%7) && !(i%8) && !(i%9) && !(i%10) && !(i%11) && !(i%12) && !(i%13) && !(i%14) && !(i%15) && !(i%16) && !(i%17) && !(i%18) && !(i%19) && !(i%20) )
        {
            printf("pe5: %ld\n", i);
            break;
        }
    }
    return EXIT_SUCCESS;
}
