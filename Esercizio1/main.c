#include <stdio.h>
#include <stdlib.h>

int divisione(int a, int b, int *q, int *r)
{
    if (b == 0)
    {
        return -1;
    }
    *q = a / b;
    *r = a % b;
    return 0;
}

int main(void)
{
    int a = 3, b = 2;
    int *quoziente = malloc(sizeof(int)), *resto = malloc(sizeof(int));
    int ris = divisione(a, b, quoziente, resto);
    if (ris == -1)
    {
        printf("Errore: divisione per zero.\n");
    }
    else
    {
        printf("Quoziente: %d, Resto: %d\n", *quoziente, *resto);
    }
    return 0;
}