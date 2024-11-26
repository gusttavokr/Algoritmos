#include <stdio.h>

int main(){
    int a = 10;
    int *ponteiro = &a; // Endereço de memória
    int valor = *ponteiro; // Atribuindo o valor em outra variável

    valor = 20;
    *ponteiro = 30; // Quando o ponteiro tem um asterico ele recebe valor
    ponteiro = &valor; // Quando  ponteiro não tem ele recebe um endereço

    printf("Valor: %d\n", valor);
    printf("Valor: %d\n", a);
    printf("Valor: %d\n", *ponteiro);
    return 0;
}