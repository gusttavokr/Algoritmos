
#include <stdio.h>

int fatorial(int n) {
    if (n == 0) {
        return 1;
    } else {
        printf("%d * fatorial(%d - 1)\n", n, n);
        return n * fatorial(n - 1);
    }
}

int main() {
    int resultado = fatorial(6);
    printf("Fatorial: %d\n", resultado);

    return 0;
}