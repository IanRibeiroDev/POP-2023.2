/*
Leia uma sequência de parênteses, sem espaços entre eles, e
indique se a sequência está balanceada imprimindo “SIM”, caso contrário
imprima “NAO”.

Exemplo de Entrada:
(()((())()))
)())(()(()))

Exemplo de Saída:
SIM
NAO
*/

#include <bits/stdc++.h>

using namespace std;

int main() {
    stack<char> stack;
    char aux;
    cin >> aux;

    while(aux == '(' || aux == ')') {
        if(aux == '(') {
            stack.push(aux);

        } else if (!stack.empty()){
            stack.pop();

        } else {
            stack.push(aux);
            break;
        }

        cin >> aux;
    }

    if(stack.empty()) {
        cout << "SIM\n";
    } else {
        cout << "NAO\n";
    }

    return 0;
}