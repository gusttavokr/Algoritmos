#include <stdio.h>
#include <math.h>

float distancia(int a, int b, int c, int d){
    float sla = sqrt(((c-a)*(c-a))+((d-b)*(d-b)));
    return sla;
}

int main(){
    float x1;
    float y1;
    float x2;
    float y2;

    printf("Digite dois valores para o ponto inicial:\n");
    scanf("%f" "%f", &x1, &y1);
    printf("Digite dois valores para o ponto final:\n");
    scanf("%f" "%f", &x2, &y2);
    printf("%.1f\n", distancia(x1,y1,x2,y2));
}