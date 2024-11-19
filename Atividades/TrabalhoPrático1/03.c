#include <stdio.h>

long mul(long a, long b){
    return a*b;
}

int main(){
    long numero1, numero2;

    printf("Digite dois números:\n");
    scanf("%ld" "%ld", &numero1, &numero2);
    printf("%ld\n", mul(numero1,numero2));
    return 0;
}