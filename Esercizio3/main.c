#include <stdio.h>

int potenza(int base, int esponente)
{
    if (esponente == 0)
        return 1;
    int risultato = 1;
    for (int i = 0; i < esponente; i++)
        risultato *= base;
    return risultato;
}

int main(void)
{
    int a = 3, b = 4, risultato;
    risultato = potenza(a, b);
    printf("%d^%d = %d\n", a, b, risultato);
    risultato = potenza(b, a);
    printf("%d^%d = %d\n", b, a, risultato);
    return 0;
}