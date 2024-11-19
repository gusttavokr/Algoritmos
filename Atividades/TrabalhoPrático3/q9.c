#include <stdio.h>
#include <string.h>

int main(){
    char String[100];
    char um = '1';
    int i, contador = 0;

    printf("Digite um binario:\n");
    scanf("%s", String);

    int tamanho = strlen(String);

    for (i = 0; i < tamanho; i++)
    {
        if (String[i] == um)
        {
            contador++;
        }
    }

    printf("%d", contador);

    return 0;
}