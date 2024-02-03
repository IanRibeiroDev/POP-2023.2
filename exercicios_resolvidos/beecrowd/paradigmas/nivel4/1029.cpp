/*
Quase todo estudante de Ciência da Computação recebe em algum momento no início de seu curso de graduação algum problema envolvendo a
sequência de Fibonacci.
Tal sequência tem como os dois primeiros valores 0 (zero) e 1 (um) e cada próximo valor será sempre a soma dos dois valores
imediatamente anteriores.
Por definição, podemos apresentar a seguinte fórmula para encontrar qualquer número da sequência de Fibonacci:
fib(0) = 0
fib(1) = 1
fib(n) = fib(n-1) + fib(n-2);

Uma das formas de encontrar o número de Fibonacci é através de chamadas recursivas.

Desta forma:
    fib(4) = 1+0+1+1+0 = 3
    Foram feitas 8 calls, ou seja, 8 chamadas recursivas.

Entrada: a primeira linha da entrada contém um único inteiro N, indicando o número de casos de teste.
Cada caso de teste contém um inteiro X (1 ≤ X ≤ 39).

Saída: para cada caso de teste de entrada deverá ser apresentada uma linha de saída, no seguinte formato: fib(n) = num_calls calls = result,
aonde num_calls é o número de chamadas recursivas, tendo sempre um espaço antes e depois do sinal de igualdade, conforme o exemplo abaixo.

Exemplo de Entrada:
2
5
4

Exemplo de Saída:
fib(5) = 14 calls = 5
fib(4) = 8 calls = 3
*/

#include <bits/stdc++.h>

using namespace std;

int fib(int n, int &calls) {
    if(n == 0) {
        calls++;
        return 0;
    }

    if(n == 1) {
        calls++;
        return 1;
    }

    calls++;
    return fib(n - 1, calls) + fib(n - 2, calls);
}

int main() {
    int qtde, x, resultado, calls = 0;
    cin >> qtde;

    while(qtde--) {
        cin >> x;
        resultado = fib(x, calls);

        cout << "fib(" << x << ") = " << calls - 1 << " calls = " << resultado << "\n";
        calls = 0;
    }

    return 0;
}