/*
Controlador de Vôo

O aeroporto de Congonhas recebe todos os dias uma média de 600 pousos e decolagens, ou cerca de 36 por hora. No último ano, foram exatamente 223.989 movimentos aéreos.
Para organizar todo o fluxo de aviões que chegam a Congonhas e saem de lá, a torre de controle funciona o tempo inteiro com nível máximo de atenção.
Para descartar qualquer possibilidade de erro humano o chefe do controle de tráfego aéreo de Congonhas contratou você para desenvolver um programa que
organize automaticamente o fluxo de aviões no campo de pouso. Para isso, basta seguir o seguinte protocolo,
os aviões que veem do lado Oeste da pista têm maior prioridade de serem colocados na fila, pois são aqueles que estão mais próximo do localizador (início da pista).
Já os aviões que estão se aproximando pelo lado Norte e Sul, devem ser inseridos na fila 1 por vez, ou seja,
insere-se 1 avião do lado Norte e em seguida 1 avião do lado Sul. Por último, insere-se o próximo avião que esteja se aproximando ao lado leste da pista.

Entrada: a entrada é composta por um número inteiro P, representando o ponto cardeal do avião que entrou no campo da pista (-4 <= P <= -1),
onde (-4 representa o lado leste, -3 o lado norte, -2 lado sul e -1 lado oeste) . Em seguida é realizada a entrada dos respectivos aviões,
compostos de um identificador começando com a letra “A” seguida de um número inteiro I (1 <= I <= 1000).
A qualquer momento é permitido trocar o ponto cardeal, e inserir novas aeronaves, repetidamente até que o controlador finalize a sessão com o dígito 0.

Saída: a saída é composta de uma linha contendo as aeronaves enfileiradas pela ordem do protocolo estabelecido pelo aeroporto.

Exemplos de Entrada
-4
A1
A26
A38
A23
-1
A80
A40
-2
A2
A16
A108
-3
A20
A44
0

-4
A12
A33
-3
A8
A33
-2
A77
A102
A866
-3
A21
A15
A9
-1
A2
0

Exemplos de Saída:
A80 A20 A2 A1 A40 A44 A16 A26 A108 A38 A23

A2 A8 A77 A12 A33 A102 A33 A21 A866 A15 A9
*/
#include <bits/stdc++.h>

using namespace std;

int main() {
    /*
    -4 leste
    -3 norte
    -2 sul
    -1 oeste

     prioridade
     oeste -> maxima
     norte e sul -> alternam começando norte
     leste -> ultimo
    */

    queue<string> filaLeste;
    queue<string> filaNorte;
    queue<string> filaSul;
    queue<string> filaOeste;
    queue<string> filaFinal;
    bool norte = true;
    string aeronave;
    cin >> aeronave;

    while(aeronave != "0") {
        if(aeronave.substr(0, 1) == "-") {
            if(aeronave.substr(1, 1) == "4") { //leste
                cin >> aeronave;
                while(aeronave.substr(0, 1) == "A") {
                    filaLeste.push(aeronave);
                    cin >> aeronave;
                }

            } else if (aeronave.substr(1, 1) == "3") { //norte
                cin >> aeronave;
                while(aeronave.substr(0, 1) == "A") {
                    filaNorte.push(aeronave);
                    cin >> aeronave;
                }

            } else if (aeronave.substr(1, 1) == "2") { //sul
                cin >> aeronave;
                while(aeronave.substr(0, 1) == "A") {
                    filaSul.push(aeronave);
                    cin >> aeronave;
                }

            } else if (aeronave.substr(1, 1) == "1") { //oeste
                cin >> aeronave;
                while(aeronave.substr(0, 1) == "A") {
                    filaOeste.push(aeronave);
                    cin >> aeronave;
                }

            }
        }
    }

    while(filaOeste.size() + filaLeste.size() + filaNorte.size()
          + filaSul.size() > 0) {
        if(!filaOeste.empty()) {
            filaFinal.push(filaOeste.front());
            filaOeste.pop();
        }

        if(!filaNorte.empty()) {
            filaFinal.push(filaNorte.front());
            filaNorte.pop();
        }

        if(!filaSul.empty()) {
            filaFinal.push(filaSul.front());
            filaSul.pop();
        }

        if(!filaLeste.empty()) {
            filaFinal.push(filaLeste.front());
            filaLeste.pop();
        }
    }

    if(!filaFinal.empty()) {
        cout << filaFinal.front();
        filaFinal.pop();
    }

    while(!filaFinal.empty()) {
        cout << " " << filaFinal.front();
        filaFinal.pop();
    }

    cout << "\n";

    return 0;
}