#include <limits.h>
#include <stdio.h>
#include <stdlib.h>

int divisione(int a, int b, int *q, int *r)
{
    if (b == 0 || (a == INT_MIN && b == -1) || a == INT_MAX || b == INT_MAX)
    {
        return -1;
    }
    *q = a / b;
    *r = a % b;
    return 0;
}

int main(void)
{
    int a = 3, b = 2, quoziente, resto;
    int ris = divisione(a, b, &quoziente, &resto);
    if (ris == -1)
    {
        printf("Errore nella divisione.\n");
    }
    else
    {
        printf("Quoziente: %d, Resto: %d\n", quoziente, resto);
    }
    return 0;
}