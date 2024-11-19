#include <stdio.h>

int inverte(int a){
    int x = a % 10;
    int y = (a/10)%10;
    int z = ((a/10)/10)%10;
    int w;

    x = x*100;
    y = y*10;
    w = x+y+z;
    return w;
}

int main(){
    int numero;

    printf("Digite um número:\n");
    scanf("%d", &numero);
    printf("%d\n", inverte(numero));
    return 0;
}