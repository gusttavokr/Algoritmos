#include <stdio.h>

int main(){
    int i, quantidade, numeros[100];

    printf("Digite a quantidade de itens no array:\n");
    scanf("%d", &quantidade);

    for (i = 0; i < quantidade; i++){  //Um for para acrescentar os itens ao array, começa do 0, enquanto é menor que a quantidade, incremente(pule) 1
        scanf("%d", &numeros[i]);
    }
    printf("O array invertido é: ");
    for (i = quantidade - 1; i >= 0; i--){ //Um for para printar o inverso, começa do ultimo, enquanto é menor ou igual a 0, decremente(volte) 1
        printf("%d ", numeros[i]);
    }
    return 0;
}
