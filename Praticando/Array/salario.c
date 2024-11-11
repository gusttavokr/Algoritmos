#include <stdio.h>

int main(){
    float sal[13]; /* indice 0 + 12 meses */
    float total;
    int i;

    for (i = 1; i<= 12; i++){
        printf("Digite o salário do mês %d:", i);
        scanf("%f", &sal[i]);
    }
    
    // Mostrar os valores mensais e calcular o total
    puts("Mês       Valor");
    for (i = 1, total = 0.0; i<=12; i++)
    {
        printf("%3d       %9.2f\n", i, sal[i]);
        total +=sal[i];
    }
    
    printf("Total anual: %9.2f\n", total);
}