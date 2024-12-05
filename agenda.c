#include <stdio.h>
#include <stdlib.h>

struct Contato
{
    char nome[100];
    char numero[15];
};

struct Contato* inserir_contato(char nome[], char numero[])
{
    struct Contato* contato = (struct Contato*) malloc(sizeof(struct Contato));
    
    strcpy(contato->nome, nome);
    strcpy(contato->numero, numero);

    return contato;
};



int main(){
    int numCont;
    int op = 0;
    int opEntrada;

    struct Contato contatos[100];

    printf("Digite quantos contatos sua agenda tera: ");
    scanf("%d", &numCont);

    printf("Bem-vindo a Agenda de Contato\n");
    while (op != 5)
    {
        printf("Digite a operacao que deseja fazer:\n\n");
        printf("1- Inserir contato, 2 - Listar contatos, 3- Remover contato, 4- Atualizar contato, 5- Sair\n");
        scanf("%d", &opEntrada);
        op += opEntrada;

        if (op==1){
            for (i = 0; i < sizeof(); i++)
            {
                /* code */
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
        
        
    }
    
    return 0;
}