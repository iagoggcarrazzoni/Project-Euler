/* 10) Summation of primes
 * AUTHOR: Iago Gade Gusmao Carrazzoni <iagocarrazzoni@gmail.com */

#include <stdio.h>

#define MIN 0
#define MAX 500000

int primo(int i);

int main(void)
{
    int i, p;
    long s = 0;

    for(i = MAX; i > MIN; i--)
    {
        p = primo(i);
        s += p; /* soma os numeros primos */
    }
    printf("pe10: %ld\n", s);

    return 0;
}

int primo(int i)
{
    int j, primo = 0;

    for(j = i; j > MIN; j--)
    {
        if(!(i%j)) /* resto da divisao de i / j for igual a zero */
            primo++;
    }
    if(primo == 2) /* eh numero primo se for dividido por 1 e por ele mesmo */
   /*     printf("%d ", i); */
        return i;
    return 0;
}
