/*
Rafael está em dúvida em qual carro escolher no seu simulador de F1.
Há dois carros que estão descritos em duas linhas distintas na entrada do problema. Em
cada linha há o nome do carro, a velocidade máxima (valor int), a potência (valor int) e o
tempo de 0 a 100km/h (valor double). Ajude Rafael imprimindo o nome do melhor carro
em cada quesito.

Exemplo de entrada:
RedBull 350 1177 2.45
Ferrari 343 1200 2.50

Exemplo de saída:
Velocidade: RedBull
Potencia: Ferrari
0-100: RedBull
*/

#include<bits/stdc++.h>

using namespace std;

int main() {
    struct Carro {
        string nome;
        int velocidade;
        int potencia;
        double tempo;
    } c1, c2;

    cin >> c1.nome >> c1.velocidade >> c1.potencia >> c1.tempo;
    cin >> c2.nome >> c2.velocidade >> c2.potencia >> c2.tempo;

    if(c1.velocidade > c2.velocidade) {
        cout << "Velocidade: " << c1.nome << "\n";
    } else {
        cout << "Velocidade: " << c2.nome << "\n";
    }

    if(c1.potencia > c2.potencia) {
        cout << "Potencia: " << c1.nome << "\n";
    } else {
        cout << "Potencia: " << c2.nome << "\n";
    }

    int tempo1 = c1.tempo * 100;
    int tempo2 = c2.tempo * 100;

    if(tempo1 < tempo2) {
        cout << "0-100: " << c1.nome << "\n";
    } else {
        cout << "0-100: " << c2.nome << "\n";
    }

    return 0;
}