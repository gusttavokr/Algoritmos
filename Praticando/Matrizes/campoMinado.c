#include <stdio.h>

void criarmatriz(int linha, int coluna, int campo[linha][coluna]){
    int i, j;
    for (i = 0; i < linha; i++){
        for (j = 0; j < coluna; j++){
            campo[i][j] = 'X';
        }
    }
}

void imprimir(int linha, int coluna, int campo[linha][coluna]){
    int i, j;
    printf("\n");
    for (i = 0; i < linha; i++){
        for (j = 0; j < coluna; j++){
            printf("%c ", campo[i][j]);
        }
        printf("\n");
    }
}

int main(){
    int linha, coluna;
    int i, j;

    printf("Digite a quantidade de linhas e colunas do seu campo minado: \n");
    scanf("%d %d", &linha, &coluna);

    int campo[linha][coluna];

    criarmatriz(linha, coluna, campo);
    imprimir(linha, coluna, campo);

    int posX, posY;
    printf("\nSeu jogo começou, digite a posição: \n");
    scanf("%d %d", &posX, &posY);

    return 0;
}