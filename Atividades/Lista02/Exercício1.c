// Faça um programa que imprima os divisores e a soma dos divisores

#include <stdio.h>

int main(){
    int numero;

    printf("Digite um numero: \n");
    scanf("%d", &numero);

    int soma_divisores = 0;

    for (int i = 1; i <= numero / 2; i++) {
        if (numero % i == 0) {
            soma_divisores += i;
        }
    }

    printf("%d", soma_divisores);
    return 0;
}
