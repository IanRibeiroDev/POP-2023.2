/*
Tipos de Triângulos

Leia 3 valores de ponto flutuante A, B e C e ordene-os em ordem decrescente, de modo que o lado A representa o maior dos 3 lados.
A seguir, determine o tipo de triângulo que estes três lados formam, com base nos seguintes casos, sempre escrevendo uma mensagem adequada:

 * se A ≥ B + C, apresente a mensagem: NAO FORMA TRIANGULO
 * se A2 = B2 + C2, apresente a mensagem: TRIANGULO RETANGULO
 * se A2 > B2 + C2, apresente a mensagem: TRIANGULO OBTUSANGULO
 * se A2 < B2 + C2, apresente a mensagem: TRIANGULO ACUTANGULO
 * se os três lados forem iguais, apresente a mensagem: TRIANGULO EQUILATERO
 * se apenas dois dos lados forem iguais, apresente a mensagem: TRIANGULO ISOSCELES

Entrada: a entrada contem três valores de ponto flutuante de dupla precisão A (0 < A) , B (0 < B) e C (0 < C).

Saída: imprima todas as classificações do triângulo especificado na entrada.

Exemplos de Entrada:
7.0 5.0 7.0
6.0 6.0 10.0
6.0 6.0 6.0
5.0 7.0 2.0
6.0 8.0 10.0

Exemplos de Saída:
TRIANGULO ACUTANGULO
TRIANGULO ISOSCELES

TRIANGULO OBTUSANGULO
TRIANGULO ISOSCELES

TRIANGULO ACUTANGULO
TRIANGULO EQUILATERO

NAO FORMA TRIANGULO

TRIANGULO RETANGULO
*/

#include<bits/stdc++.h>

using namespace std;

int main() {
    double da, db, dc;
    cin >> da >> db >> dc;
    int a = da * pow(10, 5), b = db * pow(10, 5), c = dc * pow(10, 5), maior, medio, menor;


    if(b >= a && b >= c) {
        maior = b;

        if(a >= c) {
            medio = a;
            menor = c;
        } else {
            medio = c;
            menor = a;
        }
    } else if (c >= a && c >= b) {
        maior = c;

        if(a >= b) {
            medio = a;
            menor = b;
        } else {
            medio = b;
            menor = a;
        }
    } else {
        maior = a;

        if(b >= c) {
            medio = b;
            menor = c;
        } else {
            medio = c;
            menor = b;
        }
    }

    a = maior;
    b = medio;
    c = menor;

    if(a >= b + c) {
        cout << "NAO FORMA TRIANGULO\n";

    } else {
        if(pow(a, 2) == pow(b, 2) + pow(c, 2)) {
            cout << "TRIANGULO RETANGULO\n";
        }

        if(pow(a, 2) > pow(b, 2) + pow(c, 2)) {
            cout << "TRIANGULO OBTUSANGULO\n";
        }

        if(pow(a, 2) < pow(b, 2) + pow(c, 2)) {
            cout << "TRIANGULO ACUTANGULO\n";
        }

        if(a == b && b == c) {
            cout << "TRIANGULO EQUILATERO\n";

        } else if(a == b || a == c || b == c) {
            cout << "TRIANGULO ISOSCELES\n";
        }
    }
    return 0;
}