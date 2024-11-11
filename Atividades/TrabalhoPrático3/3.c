#include <stdio.h>

int main()
{
    int vezesJogadas;
    int resultados[7] = {0, 0, 0, 0, 0, 0, 0};
    int resultados2[7] = {0, 0, 0, 0, 0, 0, 0};
    int i;

    printf("Digite quantas vezes você vai jogar: ");
    scanf("%d", &vezesJogadas);

    for (i = 1; i <= vezesJogadas; i++)
    {
        printf("Na jogada %d, o resultado foi: ", i);
        scanf("%d", &resultados[i]);
    }

    for (i = 1; i <= vezesJogadas; i++)
    {
        resultados2[i] == resultados[i];
    }

    // for (i = 1; i <= vezesJogadas; i++)
    // {

    // }
}