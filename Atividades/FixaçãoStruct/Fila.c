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









// ATUALIZADO:
#include <stdio.h>

struct Pessoa{
    char nome[100];
    int idade;
    char tipoAtendimento[100];
    char preferencia[100];
};

struct fila{
    struct Pessoa pessoa;
    struct Fila *proximo;
};



int main(){
    int op = 0;
    int num;

    struct Pessoa filaNormal;
    struct Pessoa filaPreferencial;



    printf("\nBem vindo a fila de atendimento!\n");

    while (op != 7){
        printf("Escolha uma das operacoes:\n");
        printf("1- Inserir na fila preferencial, 2- Inserir na fila normal\n");
        printf("3- Remover da preferencial, 4- Remover da normal\n");
        printf("5- Atender uma pessoa, 6- Listar as filas\n");
        printf("7- Sair\n\n");
        printf("Digite aqui: ");
        scanf("%d", &num);
        op += num;

        if (op == 1){
            char nome[100];
            int idade;
            char tipoAtendimento[100];
            char preferencia[100];

            printf("Digite o nome: ");
            scanf("%s\n", nome);
            printf("Digite a idade: ");
            scanf("%d\n", &idade);
            printf("Digite o tipo de atendimento: ");
            scanf("%s\n", tipoAtendimento);
            printf("Digite a preferência do usuário: ");
            scanf("%s\n", preferencia);

            printf("Nome: %s\n", nome);
            printf("Idade: %d\n", idade)
            op = 0;
        }
        
    }
    
}
