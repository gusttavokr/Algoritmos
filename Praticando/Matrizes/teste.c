#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int criandoBombas(int min, int max){
    return (rand() %  (max - min + 1)) + min;
}

int main(){
    srand(time(NULL));
    int num1 = criandoBombas(1, 100);
    int num2 = criandoBombas(1, 100);

    printf("%d\n", num1);
    printf("%d\n", num2);

    return 0;
}