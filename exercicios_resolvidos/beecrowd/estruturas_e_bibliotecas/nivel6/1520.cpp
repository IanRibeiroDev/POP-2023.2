/*
Parafusos e Porcas

Pedro está trabalhando em um novo emprego em uma loja de parafusos e porcas. Toda semana ele irá receber novas
encomendas de parafusos mistos em grandes caixas e precisa saber onde ele deve armazenar esses produtos.

Mango, que é supervisor de Pedro, pediu-lhe para organizar todos os parafusos e porcas em um rack enorme, de forma que
seja fácil de responder onde é possível encontrar cada predeterminado lote de parafusos e quanto de cada um destes lotes
a loja tem.

Pedro recebe todos os parafusos e porcas em caixas etiquetadas com o intervalo de tamanho dos produtos. Por exemplo,
duas caixas com os respectivos intervalos (1, 2) e (4, 8) representam lotes de produtos com tamanho
{1, 2, 4, 5, 6, 7, 8}. Um número de parafuso e porca pode estar presente em mais de uma caixa, e ele aparece na lista
uma vez para cada intervalo. Por exemplo, três caixas com os respectivos intervalos (1, 3), (2, 4) e (3,5) representam
lotes de parafusos e porcas com tamanho {1, 2, 2, 3, 3, 3, 4, 4, 5}.

Entrada:
A entrada contém vários casos de teste e termina com EOF. Cada caso de teste é composto por várias linhas. A primeira
linha contém um inteiro positivo N (N < 100) que indica a quantidade de caixas de parafusos. Seguem N linhas, cada uma
delas com dois valores X e Y (1 ≤ X < Y ≤ 100) que representam os tamanhos dos lotes de parafusos e porcas presentes
naquela caixa. A próxima linha de entrada conterá um único inteiro positivo Num (1 ≤ Num ≤ 100), que indica o número que
Mango deseja pesquisar após todos os produtos serem organizados na estante ou rack.

Obs. A estante ou rack possui prateleiras enumeradas de 0 a P, sendo que este P não deve ser superior a 10000.

Saída:
Cada caso de entrada deverá produzir uma única linha de saída, indicando as posições da prateleira nas quais o parafuso
de tamanho Num se encontra ou indicando que não foi possível encontrar o parafuso, conforme o exemplo abaixo.

Exemplo de Entrada
3
1 3
2 4
3 5
4
4
1 3
2 4
1 5
3 6
3
2
1 3
3 5
7

Exemplo de Saída
4 found from 6 to 7
3 found from 5 to 8
7 not found
*/

#include <bits/stdc++.h>

using namespace std;

int main() {
    int n, x, y, num;
    vector<int> v;

    while(cin >> n) {
        while(n--) {
            cin >> x >> y;
            for(int i = x; i <= y; i++) v.push_back(i);
        }

        sort(v.begin(), v.end());
        cin >> num;
        auto range = equal_range(v.begin(), v.end(), num);

        if(range.first == range.second) cout << num << " not found\n";
        else cout << num << " found from " << range.first - v.begin() << " to " << (range.second - v.begin()) - 1 << "\n";
        v.clear();
    }

    return 0;
}