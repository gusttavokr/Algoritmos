#include <stdio.h>

#define DIM 3
#define ESPACO ' '

void inic(char s[][DIM])
{
    int i, j;

    for (i = 0; i < DIM; i++)
    {
        for (j = 0; j < DIM; j++)
        {
            s[i][j] = ESPACO;
        }
    }
}

void mostra(char s[DIM][DIM])
{
    int i, j;
    for (i = 0; i < DIM; i++)
    {
        for (j = 0; j < DIM; j++)
        {
            printf("%c %c", s[i][j], j == DIM - 1 ? ' ' : '|');
        }
        if (i != DIM - 1)
        {
            printf("\n------");
            putchar('\n');
        }
    }
}

int main()
{
    char Velha[DIM][DIM];
    int posx, posy;
    char ch = '0'; // Caractere para jogar
    int n_jogadas = 0;

    inic(Velha);
    while (1)
    {
        mostra(Velha);
        printf("\nIntroduza a posiição de jogo Linha Coluna: ");
        scanf("%d %d", &posx, &posy);
        posx--;
        posy--;
        if (Velha[posx][posy] == ESPACO)
        {
            Velha[posx][posy] = ch = (ch == '0') ? 'X' : '0';
            n_jogadas++;
        }
        else
        {
            printf("Posição já ocupada\nJogue novamente!!\n");
        }
        if (n_jogadas == DIM * DIM)
        {
            break;
        }
    }
    mostra(Velha);
    printf("\nO jogo acabou porra\n");
}