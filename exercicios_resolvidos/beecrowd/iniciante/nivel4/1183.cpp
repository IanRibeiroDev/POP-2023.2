/*
Acima da Diagonal Principal

Leia um caractere maiúsculo, que indica uma operação que deve ser realizada e uma matriz M[12][12].
Em seguida, calcule e mostre a soma ou a média considerando somente aqueles elementos que estão acima da diagonal principal da matriz.

Entrada: a primeira linha de entrada contem um único caractere Maiúsculo O ('S' ou 'M'), indicando a operação (Soma ou Média)
que deverá ser realizada com os elementos da matriz. Seguem os 144 valores de ponto flutuante que compõem a matriz.

Saída: imprima o resultado solicitado (a soma ou média), com 1 casa após o ponto decimal.

Exemplo de Entrada:
S
1.0
0.0
-3.5
2.5
4.1
...

Exemplo de Saída:
12.6
*/

#include<bits/stdc++.h>

using namespace std;

int main() {
    char o;
    cin >> o;

    double m[12][12];
    double soma = 0;
    int contador = 0;

    for(int i = 0; i < 12; i++) {
        for(int j = 0; j < 12; j++) {
            cin >> m[i][j];
        }
    }

    for(int i = 0; i < 11; i++) {
        for(int j = 11; j > i; j--) {
            soma += m[i][j];
            contador++;
        }
    }

    if(o == 'S') {
        cout << fixed << setprecision(1) << soma << "\n";

    } else if(o == 'M') {
        cout << fixed << setprecision(1) << soma/contador << "\n";
    }

    return 0;
}