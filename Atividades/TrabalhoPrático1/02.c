#include <stdio.h>

int main(){
    char string [100];

    printf("Digite seu nome: ");
    scanf("%s", string);
    printf("Olá %s, seja bem-vindo ao mundo da linguagem de programação C!", string);
    return 0;
}