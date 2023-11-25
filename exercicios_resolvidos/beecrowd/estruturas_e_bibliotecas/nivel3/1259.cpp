/*
Pares e Ímpares

Considerando a entrada de valores inteiros não negativos, ordene estes valores segundo o seguinte critério:
 * Primeiro os Pares
 * Depois os Ímpares

Sendo que deverão ser apresentados os pares em ordem crescente e depois os ímpares em ordem decrescente.

Entrada: a primeira linha de entrada contém um único inteiro positivo N (1 < N <= 105). Este é o número de linhas de entrada que vem logo a seguir.
As próximas N linhas conterão, cada uma delas, um valor inteiro não negativo.

Saída: apresente todos os valores lidos na entrada segundo a ordem apresentada acima. Cada número deve ser impresso em uma linha, conforme exemplo abaixo.

Exemplo de Entrada:
10
4
32
34
543
3456
654
567
87
6789
98

Exemplo de Saída:
4
32
34
98
654
3456
6789
567
543
87
*/

#include<bits/stdc++.h>

using namespace std;

int main() {
    vector<int> par, impar;
    int qtde;
    int valor;
    cin >> qtde;

    for(int i = 0; i < qtde; i++) {
        cin >> valor;

        if(valor % 2 == 0) {
            par.push_back(valor);
        } else {
            impar.push_back(valor);
        }
    }

    sort(par.begin(), par.end());
    sort(impar.begin(), impar.end(), greater<int>());

    for(int p: par) {
        cout << p << "\n";
    }

    for(int im: impar) {
        cout << im << "\n";
    }

    return 0;
}