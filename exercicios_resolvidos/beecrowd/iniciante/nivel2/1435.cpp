/*
Matriz Quadrada I

Escreva um algoritmo que leia um inteiro N (0 ≤ N ≤ 100), correspondente a ordem de uma matriz M de inteiros,
e construa a matriz de acordo com o exemplo abaixo.

Entrada: a entrada consiste de vários inteiros, um valor por linha, correspondentes as ordens das matrizes a serem construídas.
O final da entrada é marcado por um valor de ordem igual a zero (0).

Saída: para cada inteiro da entrada imprima a matriz correspondente, de acordo com o exemplo.
Os valores das matrizes devem ser formatados em um campo de tamanho 3 justificados à direita e separados por espaço.
Após o último caractere de cada linha da matriz não deve haver espaços em branco.
Após a impressão de cada matriz deve ser deixada uma linha em branco.

Exemplo de Entrada:
1
2
3
4
5
0

Exemplo de Saída:
  1

  1   1
  1   1

  1   1   1
  1   2   1
  1   1   1

  1   1   1   1
  1   2   2   1
  1   2   2   1
  1   1   1   1

  1   1   1   1   1
  1   2   2   2   1
  1   2   3   2   1
  1   2   2   2   1
  1   1   1   1   1
*/

#include<bits/stdc++.h>

using namespace std;

int main() {
    int N;

    while (cin >> N && N != 0) {
        vector<vector<int>> matriz(N, vector<int>(N));
        int valor = 1;
        int inicio = 0, fim = N-1;

        while (inicio <= fim) {
            for (int i = inicio; i <= fim; i++) {
                for (int j = inicio; j <= fim; j++) {
                    matriz[i][j] = valor;
                }
            }

            valor++;
            inicio++;
            fim--;
        }

        for (int i = 0; i < N; i++) {
            for (int j = 0; j < N; j++) {
                if (j != 0) {
                    cout << " ";
                }

                cout << setw(3) << matriz[i][j];
            }
            cout << "\n";
        }

        cout << "\n";
    }
    return 0;
}