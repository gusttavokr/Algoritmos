#include <stdio.h>

int main(){
    int a= 10, b = 20; // Declarando variáveis inteiras e atribuindo valores iniciais;
    int *pa, *pb; // Declarando ponteiros 

    // Atribuindo os endereços de memória: 'a' e 'b' às aos respectivos ponteiros
    pa = &a; 
    pb = &b;

    // Modificando a variável a partir de seu ponteiro
    *pa = *pb * 2; // a vai ser igual a b vezes 2

    // Impressão
    printf("%d,%d\n", a,b);
    return 0;
}