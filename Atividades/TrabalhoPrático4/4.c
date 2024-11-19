#include <stdio.h>

void inverteArray(int arr[], int tamanho){
    int *inicio = arr;
    int *fim = arr + tamanho -1; // Apontando para o ultimo endereço

    while (inicio<fim){
        int temp = *inicio; // variável que aponta para o inicio
        *inicio = *fim; // inicio aponta para o fim
        *fim = temp; // e o fim aponta para o inicio
        inicio++;
        fim--;
    }
}

int main(){
    int arr[] = {1,2,3,4,5};
    int tamanho = 5;
    inverteArray(arr, tamanho);
    for (int i = 0; i < tamanho; i++)
    {
        printf("%d ", arr[i]);
    }
    printf("\n");
    return 0;
}