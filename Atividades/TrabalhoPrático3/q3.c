#include <stdio.h>

int main(){
    int vezesJogadas; // Quantas vezes vou testar
    int resultados[100]; // Registrando quantos resultados eu quiser até 100
    int i; // Para o laço
    int contador[6] = {0, 0, 0, 0, 0, 0}; // Para adicionar quantas vezes, nas 6 possibilidades, se repetiram


    // ENTRADA
    printf("Digite quantas vezes você irá jogar: ");
    scanf("%d", &vezesJogadas);

    for (i = 0; i < vezesJogadas; i++)
    {
        printf("Na jogada %d o resultado foi: ", i+1);
        scanf("%d", &resultados[i]);
    }


    // CONTANDO QUAIS SE REPETIRAM
    for (i = 0; i <= vezesJogadas; i++)
    {
        if (resultados[i] >= 1 && resultados[i] <= 6)
        {
            contador[resultados[i]]++;
        }
        
    }
    
    // SAÍDA 
    for (i = 1; i <=6; i++)
    {
        printf("A face %d repetiu %dx\n", i, contador[i]);
    }
    
    return 0;
}