#include <stdio.h>
#include <stdlib.h>
#include <string.h>

struct Contato
{
    char nome[100];
    char numero[15];
};

void inserir_contato(struct Contato* contato, char nome[], char numero[])
{    
    strcpy(contato->nome, nome);
    strcpy(contato->numero, numero);

}

int main(){
    int numCont;
    int op = 0;
    int opEntrada;
    int i= 0;

    struct Contato agenda[100];
    int tamanho = sizeof(agenda);

    printf("Digite quantos contatos sua agenda tera: ");
    scanf("%d", &numCont);

    printf("Bem-vindo a Agenda de Contato\n");
    while (op != 5){
        printf("Digite a operacao que deseja fazer:\n\n");
        printf("1- Inserir contato, 2 - Listar contatos, 3- Remover contato, 4- Atualizar contato, 5- Sair\n");
        scanf("%d", &opEntrada);
        op += opEntrada;

        if (op==1){
            if (i==numCont){
                printf("Agenda cheia\n");
            }
            if (i < numCont){
        
                char nome[100];
                char numero[15];

                printf("Digite o nome: ");
                scanf("%s", nome);
                printf("Digite o número: ");
                scanf("%s", numero);

                inserir_contato(&agenda[i], nome, numero);
                i++;

                printf("Contato: %s\n", nome);
                printf("Numero: %s\n", numero);
            }
            op = 0;
        }

        if (op == 2){
            for (int j = 0; j < numCont; j++){
                printf("\nContato: %s\n", agenda[j].nome);
                printf("Numero: %s\n", agenda[j].numero);
            }
            op = 0;
        }
    }
        // if (op == 1)
        // {
        //     char nome[100];
        //     char numero[15];
        //     printf("Digite o nome do contato:");
        //     scanf("%s", nome);
        //     printf("Digite o numero:");
        //     scanf("%s", numero);
        //     if (sizeof(numero) > 15 || sizeof(numero) < 15)
        //     {
        //         printf("Número inválido");
        //         break;
        //     }
            
        //     struct Contato* contato1 = inserir_contato(nome, numero);

        //     printf("Nome: %s\n", contato1->nome);
        //     printf("Numero: %s\n", contato1->numero);

        //     op = 0;
        // }

        // if (op == 2)
        // {
            
        // }
        
        
    return 0;
}
    