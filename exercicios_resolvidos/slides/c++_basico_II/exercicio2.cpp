/*
Em um banco os clientes são atendidos aleatoriamente da fila de espera. O
primeiro cliente do dia entra na fila e recebe o ticket de número 1, o próximo recebe o ticket de
número 2 ..... o sexto cliente do dia entra na fila e recebe o ticket de número 6 .....
Os n primeiros clientes do dia já estão na fila e você deve imprimir o número do ticket do cliente
que será atendido. A entrada tem 6 linhas. A primeira linha é o valor de n (valor int), as 5 linhas
seguintes podem ser do tipo:

    · "Chegada": +1 cliente entrou na fila.
    · "Atender p": atender cliente na posição p da fila e imprimir o que se pede no problema.

Exemplo de entrada:
5
Chegada
Atender 2
Atender 4
Chegada
Atender 5

Exemplo de saída:
2
5
7
*/

#include<bits/stdc++.h>

using namespace std;

int main() {
    int tickets;
    int atender;
    int contador = 5;
    vector<int> fila;
    string operacao;

    cin >> tickets;

    for(int i = 1; i < tickets + 1; i++) {
        fila.push_back(i);
    }

    while(contador--) {
        cin >> operacao;

        if(operacao == "Chegada") {
            tickets++;
            fila.push_back(tickets);

        } else {
            cin >> atender;
            cout << fila[atender - 1] << "\n";
            fila.erase(fila.begin() + atender - 1);
        }
    }
    return 0;
}