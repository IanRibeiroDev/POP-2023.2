/*
Fibonacci Fácil

A seguinte sequência de números 0 1 1 2 3 5 8 13 21... é conhecida como série de Fibonacci.
Nessa sequência, cada número, depois dos 2 primeiros, é igual à soma dos 2 anteriores.
Escreva um algoritmo que leia um inteiro N (N < 46) e mostre os N primeiros números dessa série.

Entrada: O arquivo de entrada contém um valor inteiro N (0 < N < 46).

Saída: Os valores devem ser mostrados na mesma linha, separados por um espaço em branco.
Não deve haver espaço após o último valor.

Exemplo de Entrada:
5

Exemplo de Saída:
0 1 1 2 3
*/

#include<bits/stdc++.h>

using namespace std;

int main() {
    int n, soma;
    int valorAntigo = 0, valorRecente = 1;
    cin >> n;
    cout << valorAntigo << " " << valorRecente << " ";

    for (int i = 0; i < n - 2; i++) {
        if (i == n - 3) {
            cout << valorRecente + valorAntigo << "\n";

        } else {
            soma = valorAntigo + valorRecente;
            valorAntigo = valorRecente;
            valorRecente = soma;
            cout << soma << " ";
        }
    }

    return 0;
}