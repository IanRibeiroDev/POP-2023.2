#include <bits/stdc++.h>

using namespace std;

int main() {
//    int x, y, z, pontuacao;
//    cin >> x;
//    cin >> y;
//    cin >> z;
//    pontuacao = x * 3 + y * 2 + z;
//    cout << pontuacao << "\n";


//    int k1, k2, k3, k4, k5, resultado;
//    cin >> k1 >> k2 >> k3 >> k4 >> k5;
//
//    if (k1 < 60) {
//        resultado++;
//    }
//
//    if (k2 < 60) {
//        resultado++;
//    }
//
//    if (k3 < 60) {
//        resultado++;
//    }
//
//    if (k4 < 60) {
//        resultado++;
//    }
//
//    if (k5 < 60) {
//        resultado++;
//    }
//
//    cout << resultado;


//    cout << "teste ";
//    cout << "veremos" << "\n";
//    cout << "sera que tera?\n";


//    int a, b = 0;
//    cout << a << endl << b;
//    return 0;

//    int n, resultado;
//    cin >> n;
//    resultado = n;
//
//    while(n != 1) {
//        n--;
//        resultado *= n;
//    }
//
//    cout << resultado;

    int t;
    string a, b;
    cin >> t;

    for (int i = 0; i < t; i++) {
        cin >> a;
        cin >> b;

        if (a.substr(a.size() - b.size(), b.size()) == b) {
            cout << "encaixa\n";
        } else {
            cout << "nao encaixa\n";
        }


//        if (b.size() < a.size()) {
//            cout << "encaixa\n";
//        } else {
//            cout << "nao encaixa\n";
//        }
    }

    return 0;
}
