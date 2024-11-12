#include <stdio.h>
// Para armazenamento de strings em matrizes o ideal é usar fgets, o stdin é semelhante ao syscall

// Qual a diferença entre o scanf e o fgets?
// A diferença principal é que o fgets é melhor para ler string, e o scanf até um espaço
int main() {
    char nomes[3][50];

    for (int i = 0; i < 3; i++) {
        printf("Digite o nome: ");
        fgets(nomes[i], 50, stdin);
    }

    for (int i = 0; i < 3; i++) {
        printf("%s", nomes[i]);
    }

    return 0;
}