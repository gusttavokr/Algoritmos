#include <stdio.h>

int main(){
    int kilos;
    int gato1;
    int gato2;

    printf("Digite o kilo de ração, e a quantidade de ração para os dois gatos:\n");
    scanf("%d %d %d", &kilos, &gato1, &gato2);

    int soma = gato1 + gato2;
    int dias = soma*5;
    int conversao = kilos*1000;
    int final = conversao - dias;

    printf("Resto de ração após os cinco dias: %d gramas\n", final);
}