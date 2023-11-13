/*
Notas e Moedas

Leia um valor de ponto flutuante com duas casas decimais.
Este valor representa um valor monetário.
A seguir, calcule o menor número de notas e moedas possíveis no qual o valor pode ser decomposto.
As notas consideradas são de 100, 50, 20, 10, 5, 2.
As moedas possíveis são de 1, 0.50, 0.25, 0.10, 0.05 e 0.01.
A seguir mostre a relação de notas necessárias.

Entrada: o arquivo de entrada contém um valor de ponto flutuante N (0 ≤ N ≤ 1000000.00).

Saída: imprima a quantidade mínima de notas e moedas necessárias para trocar o valor inicial, conforme exemplo fornecido.

Obs: Utilize ponto (.) para separar a parte decimal.

Exemplo de Entrada:
576.73
4.00
91.01

Exemplo de Saída:
NOTAS:
5 nota(s) de R$ 100.00
1 nota(s) de R$ 50.00
1 nota(s) de R$ 20.00
0 nota(s) de R$ 10.00
1 nota(s) de R$ 5.00
0 nota(s) de R$ 2.00
MOEDAS:
1 moeda(s) de R$ 1.00
1 moeda(s) de R$ 0.50
0 moeda(s) de R$ 0.25
2 moeda(s) de R$ 0.10
0 moeda(s) de R$ 0.05
3 moeda(s) de R$ 0.01


NOTAS:
0 nota(s) de R$ 100.00
0 nota(s) de R$ 50.00
0 nota(s) de R$ 20.00
0 nota(s) de R$ 10.00
0 nota(s) de R$ 5.00
2 nota(s) de R$ 2.00
MOEDAS:
0 moeda(s) de R$ 1.00
0 moeda(s) de R$ 0.50
0 moeda(s) de R$ 0.25
0 moeda(s) de R$ 0.10
0 moeda(s) de R$ 0.05
0 moeda(s) de R$ 0.01


NOTAS:
0 nota(s) de R$ 100.00
1 nota(s) de R$ 50.00
2 nota(s) de R$ 20.00
0 nota(s) de R$ 10.00
0 nota(s) de R$ 5.00
0 nota(s) de R$ 2.00
MOEDAS:
1 moeda(s) de R$ 1.00
0 moeda(s) de R$ 0.50
0 moeda(s) de R$ 0.25
0 moeda(s) de R$ 0.10
0 moeda(s) de R$ 0.05
1 moeda(s) de R$ 0.01
*/

#include<bits/stdc++.h>

using namespace std;

int main() {
    string valor;
    cin >> valor;
    int n100 = 0, n50 = 0, n20 = 0, n10 = 0, n5 = 0, n2 = 0,
            m100 = 0, m50 = 0, m25 = 0, m10 = 0, m5 = 0, m1 = 0, aux;

    int separador = valor.find(".");
    string notas = valor.substr(0, separador);
    string moedas = valor.substr(separador + 1);

    if(notas.size() > 2) {
        n100 = stoi(notas.substr(0, notas.size() - 2));
        aux = stoi(notas.substr(notas.size() - 2));

    } else {
        aux = stoi(notas);
    }

    while(aux > 0) {
        if(aux >= 50) {
            n50++;
            aux -= 50;

        } else if(aux >= 20) {
            n20++;
            aux -= 20;

        } else if(aux >= 10) {
            n10++;
            aux -= 10;

        } else if(aux >= 5) {
            n5++;
            aux -= 5;

        } else if(aux >= 2) {
            n2++;
            aux -= 2;

        } else {
            m100++;
            aux -= 1;
        }
    }

    aux = stoi(moedas);

    while(aux > 0) {
        if(aux >= 50) {
            m50++;
            aux -= 50;

        } else if(aux >= 25) {
            m25++;
            aux -= 25;

        } else if(aux >= 10) {
            m10++;
            aux -= 10;

        } else if(aux >= 5) {
            m5++;
            aux -= 5;

        } else {
            m1++;
            aux -= 1;
        }
    }

    cout << "NOTAS:\n";
    cout << n100 << " nota(s) de R$ 100.00\n";
    cout << n50 << " nota(s) de R$ 50.00\n";
    cout << n20 << " nota(s) de R$ 20.00\n";
    cout << n10 << " nota(s) de R$ 10.00\n";
    cout << n5 << " nota(s) de R$ 5.00\n";
    cout << n2 << " nota(s) de R$ 2.00\n";
    cout << "MOEDAS:\n";
    cout << m100 << " moeda(s) de R$ 1.00\n";
    cout << m50 << " moeda(s) de R$ 0.50\n";
    cout << m25 << " moeda(s) de R$ 0.25\n";
    cout << m10 << " moeda(s) de R$ 0.10\n";
    cout << m5 << " moeda(s) de R$ 0.05\n";
    cout << m1 << " moeda(s) de R$ 0.01\n";

    return 0;
}