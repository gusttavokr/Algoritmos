#include <stdio.h>

int main()
{
    int operador = 0;
    double saldo = 0;
    double deposito;
    double sacar;

    printf("Seja bem-vindo(a) ao seu caixa eletronico\nDigite o digito da operacao:\n");
    printf("1- Depositar, 2- Sacar, 3- Ver saldo, 4- Sair\n");

    while (1)
    {
        scanf("%d", &operador);

        if (operador == 1)
        {
            printf("Quanto voce deseja depositar?\n");
            scanf("%lf", &deposito);
            saldo = saldo + deposito;
            printf("Voce depositou: R$%.2f\n", deposito);
        }
        else if (operador == 2)
        {
            if (saldo <= 0)
            {
                printf("Saldo insuficiente\n");
            }
            else
            {
                printf("Quanto voce deseja sacar?\n");
                scanf("%lf", &sacar);
                if (sacar > saldo)
                {
                    printf("Saldo insuficiente\n");
                }
                else
                {
                    saldo = saldo - sacar;
                    printf("Voce sacou: R$%.2f\n", sacar);
                }
            }
        }
        else if (operador == 3)
        {
            printf("Seu saldo atual: R$%.2f\n", saldo);
        }
        else if (operador == 4)
        {
            printf("Agradecemos por usar o nosso banco!");
            break;
        }
        if (operador != 4)
        {
            printf("1- Depositar, 2- Sacar, 3- Ver saldo, 4- Sair\n");
        }
    }
    return 0;
}