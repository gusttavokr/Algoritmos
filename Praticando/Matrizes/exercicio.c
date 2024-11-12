#include <stdio.h>

int main(){
    int vetor[10];
    int n = 10, i;

    for (i = 0; i < n; i++)
    {
        vetor[i] = i * (n-i);
    }

    for (i = 0; i < n; i++)
    {
        printf("%d\n", vetor[i]);
    }
    
    
}

