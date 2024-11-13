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

// int criadorBomba(int min, int max){
//     return (rand() %  (max - min + 1)) + min;
// }

void inserindoBomba(int linha, int coluna, char campo[linha][coluna], int quantidade){
    // campo[x][y] = '*';
    int bombasColocadas = 0;
    int linhA, colunA;
    while (bombasColocadas < quantidade)
    {
        linha = rand() % linhA;
        coluna = rand() % colunA;

        while (campo[linha][coluna] != '*')
        {
            campo[linha][coluna] = '*';
            bombasColocadas++;
        }
        
    }
    
}


int main(){
    srand(time(NULL)); // Sempre que reinicializado, irá gerar novos números

    int linha, coluna; 
    int i;

    printf("Digite a quantidade de linhas e colunas do seu campo minado: \n");
    scanf("%d %d", &linha, &coluna);

    // Criando a matriz
    char campo[linha][coluna];
    criarmatriz(linha, coluna, campo); 

    // Determinando a quantidade de bombas mínimas de acordo com a matriz, sempre sendo 25%
    int qtdBomba = (linha*coluna)*0.25; 

    // Criando as bombas e inserindo na matriz
    inserindoBomba(linha, coluna, campo, qtdBomba); 
    // Imprimindo a matriz do campo minado
    imprimir(linha, coluna, campo); 

    // Declarando a posição x e y do jogados
    int posX, posY; 
    printf("\nSeu jogo começou, digite a posição: \n");
    scanf("%d %d", &posX, &posY);


    return 0;
}