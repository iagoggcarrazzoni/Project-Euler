9)
/* 9) Special Pythagorean triplet
 * AUTHOR: Iago Gade Gusmao Carrazzoni <iagocarrazzoni@gmail.com */

#include <stdio.h>
#include <stdlib.h>
#include <math.h>

#define MIL 1000
#define MIL8 8000
#define MAX 4000000
#define DOIS 2

int main(void)
{
    long a, b, c = DOIS, r = 0, delta, aux1, aux2, aux3;

    do
    {
        delta = pow(DOIS,DOIS) * pow(c,DOIS) + MIL8 * c - MAX;
        if(delta >= 0)
        {
            a = (DOIS * MIL - DOIS * c + sqrt(delta)) / pow(DOIS,DOIS);
            b = MIL - a - c;
            aux1 = a + b + c;
            aux2 = pow(c,DOIS);
            aux3 = pow(a,DOIS) + pow(b,DOIS);
            if((c > b) && (c > a) && (aux1 == MIL) && (aux2 == aux3))
            {
                r = a * b * c;
                printf("a=%ld, b=%ld, c=%ld\n", a, b, c);
            }
        }
        c++;
    }while(r == 0);

    printf("pe9: %ld\n", r);

    return EXIT_SUCCESS;
}
