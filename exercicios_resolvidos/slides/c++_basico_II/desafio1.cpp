/*
Leia uma lista de 10 valores inteiros e em seguida responda a 3
consultas. Em cada consulta é dado um número para que você verifique se ele
está na lista. Se sim, indique a posição do número na lista, caso contrário
imprima "Fora da lista".

Exemplo de Entrada:
200 12 -57 849 9 -31 0 3000 2 5
-57
68
5

Exemplo de Saída:
3
Fora da lista
10
*/

#include<bits/stdc++.h>

using namespace std;

int main() {
    int valores[10];
    int teste;
    bool entrou = false;

    for(int i = 0; i < 10; i++) {
        cin >> valores[i];
    }

    for(int i = 0; i < 3; i++) {
        cin >> teste;

        for(int j = 0; j < 10; j++) {
            if(teste == valores[j]) {
                cout << j + 1 << "\n";
                entrou = true;
            }
        }

        if(!entrou) {
            cout << "Fora da lista\n";
            entrou = false;
        }

        entrou = false;
    }

    return 0;
}