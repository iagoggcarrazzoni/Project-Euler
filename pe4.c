/* 4) Largest palindrome product
 * AUTHOR: Iago Gade Gusmao Carrazzoni <iagocarrazzoni@gmail.com */

#include <stdio.h>
#include <stdlib.h>

#define S 7
#define MIN 10000
#define MID 99999
#define MAX 998001 /* produto de 999 * 999 */
#define MIN2 100
#define MAX2 999

void testa(int i);

int main(void)
{
    int num, i; /* de 5 a 6 digitos */
    char p[S];

    for(i = MAX; i > MIN; i--)
    {
        if(i >= MIN && i < MID) /* numero entre 10000 e 99999 */
        {
            num = i;
            sprintf(p, "%d", num);
            if((p[0] == p[4]) && (p[1] == p[3])) /* exemplo 10501 */
                testa(i);
        }
        if(i > MID)
        {
            num = i;
            sprintf(p, "%d", num);
            if((p[0] == p[5]) && (p[1] == p[4]) && (p[2] == p[3])) /* exemplo: 123321 */
                testa(i);
              /*  printf("pe4: %s\n", p); */
        }
    }
    return EXIT_SUCCESS;
}

void testa(int i) /* testa se o palindromo eh um produto de dois numeros de 3 digitos */
{
    int aux, j;

    for(j = MAX2; j > MIN2; j--)
    {
        aux = i / j;
        if(!(i%j) && aux > MIN2 && aux < MAX2)
        {
            aux *= j;
            printf("pe4: %d\n", aux);
            return;
        }
    }
    return;
}
