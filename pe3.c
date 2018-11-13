/* 3) Largest prime factor
 * AUTHOR: Iago Gade Gusmao Carrazzoni <iagocarrazzoni@gmail.com */

#include <stdio.h>
#include <stdlib.h>
#include <math.h>

#define NUM 600851475143

int ehprimo(long p);

int main(void)
{
    long num = 2, f;

    for(f = 3; f <= sqrt(NUM); f += 2)
    {
        if(!ehprimo(f))
            continue;

        if(!(NUM%f))
            num = f;
    }

    printf("pe3: %ld\n", num);

    return EXIT_SUCCESS;;
}

int ehprimo(long p)
{
    long t;

    if(p < 2)
        return 0;

    if(p <= 3)
        return 1;

    if(!(p%2))
        return 0;

    for(t = 3; t < sqrt(p); t += 2)
        if(!(p%t))
            return 0;

    return 1;
}
