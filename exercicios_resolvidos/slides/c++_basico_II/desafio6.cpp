/*
O Natal está chegando! E junto com ele muitas boas recordações,
festas, presentes e a melhor parte (além de estar com a sua família e amigos,
claro!): muitas guloseimas deliciosas! Desta vez, você ficou responsável por
distribuir os biscoitos amanteigados nos pacotinhos. Você tem de 1 - n (1 < n <
10^5) tipos de biscoitos amanteigados, com ai (0 < i < n) biscoitos de cada tipo.
Cada tipo de biscoito deve aparecer exatamente uma vez em cada pacotinho.
Qual é a quantidade máxima de pacotinhos que você pode organizar?

Exemplo de Entrada:
5
72 57 15 21 23

Exemplo de Saída:
15
*/

#include<bits/stdc++.h>

using namespace std;

int main() {
    int tipos;
    vector<int> biscoitos;
    int aux;

    cin >> tipos;

    for(int i = 0; i < tipos; i++) {
        cin >> aux;
        biscoitos.push_back(aux);
    }

    sort(biscoitos.begin(), biscoitos.end());

    cout << biscoitos[0] << "\n";

    return 0;
}