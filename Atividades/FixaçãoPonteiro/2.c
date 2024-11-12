#include <stdio.h>

int main(){
    int a = 10, b = 20, c = 30; // Declarando variáveis inteiras e atribuindo valores;
    int *ponteiro; // Declarando um ponteiro;
    ponteiro = &b; // O ponteiro recebe o endereço de memória de B
    *ponteiro = -5; // Agora o endereço de memória de B recebe -5
    ponteiro = &c; // O ponteiro recebe agora o endereço de C
    *ponteiro = 50; // O endereço de C agora recebe 50
    ponteiro = &a; // O ponteiro recebe o endereço de A

    // impressão     
    printf("a,b,c,*p=%d,%d,%d,%d\n", a, b,c, *ponteiro);
    return 0;
}