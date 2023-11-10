/*
Fatorial Simples

Ler um valor N.
Calcular e escrever seu respectivo fatorial. Fatorial de N = N * (N-1) * (N-2) * (N-3) * ... * 1.

Entrada: a entrada contém um valor inteiro N (0 < N < 13).

Saída: a saída contém um valor inteiro, correspondente ao fatorial de N.

Exemplo de Entrada:
4

Exemplo de Saída:
24
*/

#include <bits/stdc++.h>

using namespace std;

int main() {

    int n, resultado;
    cin >> n;
    resultado = n;

    while(n != 1) {
        n--;
        resultado *= n;
    }

    cout << resultado << "\n";

    return 0;
}