#include <stdio.h>

char Ordenando(int array[]){
    int count = sizeof(array);
    char resposta[100];
    for (int i = 0; i < count; i++)
    {
        if (i > array[i+1])
        {
            resposta = "NAOORDENADO";
            break;
        }
        resposta = "ORDENADO";
    }
    
    return resposta;
}

int main(){
    int array[100] = {1, 2, 4, 5, 9};
    char final = Ordenando(array);

    printf("%c", final); 
}