/*
PUM

Escreva um programa que leia um valor inteiro N.
Este N é a quantidade de linhas de saída que serão apresentadas na execução do programa.

Entrada: o arquivo de entrada contém um número inteiro positivo N.

Saída: imprima a saída conforme o exemplo fornecido.

Exemplo de Entrada:
7

Exemplo de Saída:
1 2 3 PUM
5 6 7 PUM
9 10 11 PUM
13 14 15 PUM
17 18 19 PUM
21 22 23 PUM
25 26 27 PUM
*/

#include<bits/stdc++.h>

using namespace std;

int main() {
    int n, soma = 1;
    cin >> n;

    for(int i = 0; i < n; i++) {
        for(int j = 0; j < 4; j++) {
            if (j == 3) {
                cout << "PUM\n";
                soma++;
            } else {
                cout << soma << " ";
                soma++;
            }
        }
    }

    return 0;
}