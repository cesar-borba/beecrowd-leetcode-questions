#include <bits/stdc++.h>
#define pb push_back
#define mp make_pair

//Nome: Coordenadas de um Ponto
//Assunto: Seleção
//Competição/criador: Adaptado por Neilor Tonin, URI Brasil
//https://judge.beecrowd.com/pt/problems/view/1041

using namespace std;

int main() {

    ios::sync_with_stdio(false);

    float x, y;

    cin >> x >> y;

    if (x==0 && y==x)
        cout << "Origem" << endl;
    else if (x==0 && y!=x)
        cout << "Eixo Y" << endl;
    else if (y==0 && x!=y)
        cout << "Eixo X" << endl;
    
    if (x>0 && y!=0) {
        if (y>0)
            cout << "Q1" << endl;
        else
            cout << "Q4" << endl;
    }
    else if (x<0 && y!=0){
        if (y>0)
            cout << "Q2" << endl;
        else
            cout << "Q3" << endl;
    }

    return 0;
}