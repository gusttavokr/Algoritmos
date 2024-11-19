#include <stdio.h>

float comissao(int a, int b){
    float comissao = b*0.04;
    return comissao;
}

float salariofinal(int a, float b){
    float salariofinal = a+b;
    return salariofinal;
}

int main(){
    int salario;
    int vendas;

    printf("Digite o seu salário:\n");
    printf("- Salário fixo do funcionário: R$");
    scanf("%d", &salario);
    printf("\nDigite o seu valor de vendas:\n");
    printf("- Valor de vendas: R$");
    scanf("%d", &vendas);

    printf("\n- Valor da comissão: R$%.2f\n", comissao(salario, vendas));
    printf("\n- Valor da comissão: R$%.2f\n", salariofinal(salario, comissao(salario, vendas)));
    return 0;
}