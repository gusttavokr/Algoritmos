#include <stdio.h>

int main(){
    char texto[100];
    int i, contador = 0;

    printf("Digite a sua string:\n");
    scanf("%s", texto);

    for (i = 0; texto[i] != '\0' ; i++){
        contador += 1;
    }
    printf("A quantidade de caracteres é: %d\n", contador);
    return 0;
}
