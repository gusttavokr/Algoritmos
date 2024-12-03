# Questão 1
### Analise o algoritmo abaixo e determine a complexidade deste, justificando pela expressão de quantidade de operações:

```
#include <stdio.h>

int obter_primeiro_elemento(int lista[], int tamanho) {
   return lista[0]; 
}

int main() {
   int lista[] = {10, 20, 30, 40, 50}; 1
   int tamanho = sizeof(lista) / sizeof(lista[0]); 
   
   printf("Primeiro elemento: %d\n", obter_primeiro_elemento(lista, tamanho));
   
   return 0;
}
```

### <span style="color:red">Resposta:</span>
**A complexidade desse algoritmo é:** <span style="color:red">O(n)</span>\
Resposta certa: O(1), pois a entrada não interfere no tempo de execução do resultado.\
**A quantidade de operações primitivas é:** 11 operações

**Observações:** O return também conta como uma operação primitiva.


# Questão 2
### Considere o seguinte trecho de código em C, determine a sua complexidade, justificando pela expressão de quantidade de operações. Descreva também o que o algoritmo está realizando como função.

#include <stdio.h>

```
int busca_binaria(int arr[], int tamanho, int alvo) {
    int inicio = 0;                   1
    int fim = tamanho - 1;          2

    while (inicio <= fim) {          1 log n
        int meio = inicio + (fim - inicio) / 2;  4 log n *Observações
        
        if (arr[meio] == alvo) 
            return meio;
        else if (arr[meio] < alvo)
            inicio = meio + 1;
        else
            fim = meio - 1;
    }

    return -1; // Elemento não encontrado
}

int main() {
    int arr[] = {2, 3, 4, 10, 40}; 1 
    int tamanho = sizeof(arr) / sizeof(arr[0]); 5
    int alvo = 10; 1 
    
    int resultado = busca_binaria(arr, tamanho, alvo); 2
    (resultado == -1) ? printf("Elemento não encontrado\n") : printf("Elemento encontrado no índice %d\n", resultado);
    
    return 0;
}
```

### <span style="color:red">Resposta:</span>
**A complexidade desse algoritmo é: O(log n)**\
**A quantidade de operações primitivas é:** 
