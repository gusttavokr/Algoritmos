#include <stdio.h>

float soma(float a, float b, float c, float d){
    return a+b+c+d;
}

float media(float a,float b, float c, float d){
    int final;

    return soma(a,b,c,d)/4;
}

int main(){
    float um;
    float dois;
    float tres;
    float quatro;

    printf("Digite quatro notas\n");
    scanf("%f" "%f" "%f" "%f", &um, &dois, &tres, &quatro);
    printf("%.1f\n", media(um,dois,tres,quatro));
    return 0;
}