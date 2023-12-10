/*
Jogando Cartas Fora

Dada uma pilha de n cartas enumeradas de 1 até n com a carta 1 no topo e a carta n na base.
A seguinte operação é ralizada enquanto tiver 2 ou mais cartas na pilha.

Jogue fora a carta do topo e mova a próxima carta (a que ficou no topo) para a base da pilha.

Sua tarefa é encontrar a sequência de cartas descartadas e a última carta remanescente.

Cada linha de entrada (com exceção da última) contém um número n ≤ 50. A última linha contém 0 e não deve ser processada.
Cada número de entrada produz duas linhas de saída.
A primeira linha apresenta a sequência de cartas descartadas e a segunda linha apresenta a carta remanescente.

Entrada: a entrada consiste em um número indeterminado de linhas contendo cada uma um valor de 1 até 50. A última linha contém o valor 0.

Saída: para cada caso de teste, imprima duas linhas.
A primeira linha apresenta a sequência de cartas descartadas, cada uma delas separadas por uma vírgula e um espaço.
A segunda linha apresenta o número da carta que restou. Nenhuma linha tem espaços extras no início ou no final.
Veja exemplo para conferir o formato esperado.

Exemplo de Entrada
7
19
10
6
0

Exemplo de Saída
Discarded cards: 1, 3, 5, 7, 4, 2
Remaining card: 6
Discarded cards: 1, 3, 5, 7, 9, 11, 13, 15, 17, 19, 4, 8, 12, 16, 2, 10, 18, 14
*/

#include <bits/stdc++.h>

using namespace std;

int main() {
    deque<int> cartas;
    string descartadas;
    string remanescente;
    int numero;
    cin >> numero;

    while(numero != 0) {
        for(int i = numero; i > 0; i--) {
            cartas.push_front(i);
        }

        if(cartas.size() > 1) {
            descartadas = "Discarded cards: " + to_string(cartas.front());
            cartas.pop_front();
            cartas.push_back(cartas.front());
            cartas.pop_front();
        }

        while(cartas.size() > 1) {
            descartadas += ", " + to_string(cartas.front());
            cartas.pop_front();
            cartas.push_back(cartas.front());
            cartas.pop_front();
        }

        remanescente = "Remaining card: " + to_string(cartas.front());

        cout << descartadas << "\n";
        cout << remanescente << "\n";

        cartas.clear();
        cin >> numero;
    }
    return 0;
}