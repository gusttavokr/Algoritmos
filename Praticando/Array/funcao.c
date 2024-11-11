#include <stdio.h>

void zereTudo(int x[10]){
    int i;
    for (i = 0; i < 10; i++)
    {
        x[i] = 0;
    }
    
}

int main(){
    int x[10];
    int i;
    zereTudo(x);

    for (i = 0; i < 10; i++)
    {
        printf("%d\n", x[i]);
    }
    
}