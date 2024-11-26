#include <stdio.h>

int main() {
    int numeros[5] = {10, 20, 30, 40, 50};
    int *ponteiro = &numeros[5]; // Atribuindo o endereço de memória no primeiro elemento

    for (int i = 1; i <= 5; i++) {
        printf("%d ", *(ponteiro - i)); // Ao somar um, automaticamente ele percorre os elementos
    }

    return 0;
}