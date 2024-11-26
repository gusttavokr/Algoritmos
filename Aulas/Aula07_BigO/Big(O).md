## Introdução
A notação Big(O) é uma forma de descrever a complexidade de um algoritmo. Usada para descrever o comportamento de um algoritmo em relação ao tamanho da entrada.

**Usada para descrever o pior caso de um algoritmo, o tempo que ele leva para executar.**

O(1) - Quando o programa não depende da entrada
```
Algoritmo média(a, b, c)
  Entrada: valores reais a, b e c
  Saída: a média aritmética de a, b, c

  média ← (a + b + c) / 3
  retorne média
```
O(n) - Quando se depende de uma entrada, por exemplo:
```
Algoritmo soma(A, n)
  Entrada: arranjo A com n >= 1 elementos inteiros
  Saída: a soma dos elementos de A

  soma ← 0 // 1 operação
  Para i de 0 até n- 1 faça  // 2 operação
    soma ← soma + A[i] // 3*n operações 
  Fim Para // 3*n operações

retorne soma // 1 operação

TOTAL = 1 + 2 + 3n + 3n + 1 = 6n + 4
```

## Notação Big(O)
As notações Big(O) mais comuns são:

- O(1) - constante (Realiza a operação **independente do tamanho da entrada**)
- O(log n) - logarítmica (Realiza a operação só até **uma fração de n**)
- O(n) - linear (Realiza as operações de acordo com o **tamanho da entrada**)
- O(n log n) - linearítmica (Realiza as operações de acordo com o **produto do tamanho da entrada com o logaritmo do tamanho da entrada**)
- O(n^2) - quadrática (Realiza as operações proporcionalmente ao **quadrado da entrada**)
- O(n^3) - cúbica (Mesma ideia, o **cubo** da entrada)
- O(2^n) - exponencial (Em geral, as funções recursivas são exponenciais. Logo, é realizado o **exponencial** do tamanho da entrada)

## Bibliografia:
- Entendendo algoritmos
- Edsger W. Dijkstra