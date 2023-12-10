/*
Stefan, bicampeão da NBA (Navegação Baseada em Arrays) pelo Paysandu decidiu ensinar arremessos ao seu camarada Govboy.
Então, nosso Loiron James vai digitar três linhas: o número de cestas de 3 pontos, de 2 pontos e 1 ponto.
Ajude Govboy a calcular a pontuação total e aprender que no basquete as cestas podem resultar em pontuações diferentes.

Exemplo de Entrada:
2
1
4

Exemplo de Saída:
Total: 12
*/

#include <bits/stdc++.h>

using namespace std;

int main() {
    int x, y, z, pontuacao;
    cin >> x;
    cin >> y;
    cin >> z;
    pontuacao = x * 3 + y * 2 + z;
    cout << "Total: " << pontuacao << "\n";
    return 0;
}
