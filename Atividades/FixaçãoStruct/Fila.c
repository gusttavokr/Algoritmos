#include <stdio.h>
#include <stdlib.h>
#include <string.h>

struct Pessoa{
    char nome;
    int idade;
    char tipo;
    char preferencia;
};


void InserirPreferencial(struct Pessoa* pessoa, char nome[], int idade, char tipo[], char preferencia[]){
    strcpy(pessoa->nome, nome);
    strcpy(pessoa->idade, idade);
    strcpy(pessoa->tipo, tipo);
    strcpy(pessoa->preferencia, preferencia);
}

// struct Atendimento{
//     int p = &arr[i+1];
// };

int main(){

    int i, op = 0;
    int num;
    struct Pessoa filaNormal[100];
    struct Pessoa filaPreferencia[100];

    printf("Bem-vindo a fila de atendimento!\n");

    //DEU ERRADOOOOOOOOOOOOOOOOO ESSA DROGA N FUNCIONAAAAAAAAAAAAAAAAAAA

    while (op != 7){
        printf("Escolha uma das operações abaixo:\n\n");
        printf("1- Inserir pessoa na fila preferencial, 2- Inserir pessoa na fila normal, 3- Remover uma pessoa da fila preferencial\n4- Remover uma pessoa da fila normal, 5- Atender uma pessoa da fila, 6- Listar cada fila\n7- Sair\n");
        scanf("%d", &num);
        op+= num;
        if (op == 1){
            char nome[100];
            int idade;
            char tipo[100];
            char preferencia[100];

            printf("Digite o nome da pessoa: ");
            scanf("%s", &filaPreferencia->nome);
            printf("Digite a idade: ");
            scanf("%d", &filaPreferencia->idade);
            printf("Digite o tipo de atendimento: ");
            scanf("%s", &filaPreferencia->tipo);
            printf("Digite a preferencia: ");
            scanf("%s", &filaPreferencia->preferencia);

            InserirPreferencial(filaPreferencia, nome, idade, tipo, preferencia);
            op = 0;
            
            printf("Nome: %s\n", nome);
            printf("Idade: %d\n", idade);
            printf("Tipo: %s\n", tipo);
            printf("Preferência: %s\n", preferencia);
        }
    }
    
}