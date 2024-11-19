#include <stdio.h>

int main(){
    char String1[100];
    char String2[100];
    char Concatenado[200];
    int i =0, j = 0;

    printf("Digite a string 1:\n");
    scanf("%s", &String1);
    printf("Digite a string 2:\n");
    scanf("%s", &String2);


    // Copiando a String1 para Concatenando
    while (String1[i] != '\0')
    {
        Concatenado[i] = String1[i];
        i++;
    }

    // Concatenando String2 no final de Concatenado
    while (String2[j] != '\0')
    {
        Concatenado[i] = String2[j];
        i++;
        j++;
    }

    Concatenado[i] = '\0'; // Adicionando um caractere nulo no final
    // Se não adicionar, o código irá resultar em erros imprevisivéis em casos de string com espaço
    // Strings pequenas vem com lixo de memoria

    // RESUMINDO, COLOQUE O CARACTERE NULO
    
    printf("As strings concatenadas sao: %s", Concatenado);

    return 0;
}