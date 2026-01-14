#include <stdio.h>

int conversione(int secondiInput, int* ore, int* minuti, int* secondi)
{
    *ore = secondiInput / 3600;
    *minuti = secondiInput / 60;
    *secondi = secondiInput;
    return 0;
}

int main(void)
{
    int secondiInput = 3600, ore, minuti, secondi;
    conversione(secondiInput, &ore, &minuti, &secondi);
    printf("%d secondi corrispondono a:\n", secondiInput);
    printf("%d ore\n%d minuti\n%d secondi\n", ore, minuti, secondi);
    return 0;
}