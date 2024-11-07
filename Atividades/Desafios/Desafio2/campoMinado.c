#include <stdio.h>

int linha(){
    for 
}

int main(){
    int matriz[5][5] = {
        {0, -1, -1, 0, 0},
        {-1, 0, 0, -1, 0},
        {0, 0, 0, -1, -1},
        {0, -1, 0, 0, -1},
        {-1, 0, -1, 0, 0}
    };

    int linha = 0;
    int linha = 1;
    int linha = 2;
    int linha = 3;
    int linha = 4;

    printf("A linha %d da matriz é: ", linha);
    for (int i = 0; i < 5; i++) {
        printf("%d ", matriz[linha][i]);  // Acessa a linha 'linha' e imprime seus elementos
    }
    printf("\n");

    return 0;
}