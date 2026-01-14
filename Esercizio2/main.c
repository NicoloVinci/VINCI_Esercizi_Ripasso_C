#include <stdio.h>

int function(int secondiInput, int* ore, int* minuti, int* secondi)
{
    *ore = secondiInput / 3600;
    *minuti = secondiInput / 60;
    *secondi = secondiInput;
    return 0;
}

int main(void)
{
    int secondiInput = 3600, ore, minuti, secondi;
    function(secondiInput, &ore, &minuti, &secondi);
    printf("%d secondi sono %d ore, %d minuti o %d secondi\n", secondiInput, ore, minuti, secondi);
    return 0;
}