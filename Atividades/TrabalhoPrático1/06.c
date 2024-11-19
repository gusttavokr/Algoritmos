#include <stdio.h>

float media(float a, float b){
    float final = ((a*6)+(b*4))/10;
    return final;
}

int main(){
    float nota1;
    float nota2;

    printf("Digite suas duas notas:\n");
    scanf("%f" "%f", &nota1, &nota2);
    printf("Sua média final foi: %.1f\n", media(nota1,nota2));
    return 0;
}