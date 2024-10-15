#include <stdio.h>

float ajuste(int numero, int percentual){
    float ajuste = numero*(percentual/100.0);
    float ajustado = numero + ajuste;
    return ajustado;
}

int main(){
    int numero;
    int percentual;

    printf("Digite o seu salário:\n");
    scanf("%d", &numero);
    printf("Digite o aumento:\n");
    scanf("%d", &percentual);
    printf("Seu salário agora é: %.2f\n", ajuste(numero, percentual));
    return 0;
}