#include <stdio.h>
#include <stdlib.h>
#include <time.h>

void criarmatriz(int linha, int coluna, char campo[linha][coluna]){
    int i, j;
    for (i = 0; i < linha; i++){
        for (j = 0; j < coluna; j++){
            campo[i][j] = 'X';
        }
    }
}

void imprimir(int linha, int coluna, char campo[linha][coluna]){
    int i, j;
    printf("\n");
    for (i = 0; i < linha; i++){
        for (j = 0; j < coluna; j++){
            printf("%c ", campo[i][j]);
        }
        printf("\n");
    }
}

int criadorBomba(int min, int max){
    return (rand() %  (max - min + 1)) + min;
}

void inserindoBomba(int linha, int coluna, char campo[linha][coluna], int x, int y){
    campo[x][y] = '*';
}


int main(){
    srand(time(NULL));

    int linha, coluna;
    int i, j;

    printf("Digite a quantidade de linhas e colunas do seu campo minado: \n");
    scanf("%d %d", &linha, &coluna);

    char campo[linha][coluna];

    criarmatriz(linha, coluna, campo);
    imprimir(linha, coluna, campo);

    int posX, posY;
    printf("\nSeu jogo começou, digite a posição: \n");
    scanf("%d %d", &posX, &posY);

    int bomba1X = criadorBomba(0, linha-1);
    int bomba1Y = criadorBomba(0, coluna-1);

    inserindoBomba(linha, coluna, campo, bomba1X, bomba1Y);
    imprimir(linha, coluna, campo);

    return 0;
}