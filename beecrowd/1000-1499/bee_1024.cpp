#include <bits/stdc++.h>

//https://judge.beecrowd.com/pt/problems/view/1024

using namespace std;

int main() {
    vector<string> teste;

    int a;

    cin >> a;
    cin.ignore(); //utilizado para limpar o buffer de entrada do caractere '\n', antes de ser validado pelo getline() dentro do loop for
    string frase;
    
    for(int i=0; i<a; i++) {
        getline(cin, frase);
        teste.push_back(frase);    
    }

    for (int i=0; i<teste.size(); i++) {
        for(int j=0; j< teste[i].size(); j++) {
            if (isalpha(teste[i][j])){
                teste[i][j] += 3;
            }
        }
    }

    for (int i=0; i< teste.size();i++) {
        string contr;
        for(int j=teste[i].size()-1;j<teste[i].size();j--) {
            contr+=teste[i][j];
        }
        teste[i]=contr;
    }

    for(int i=0; i<teste.size();i++) {
        int metade = teste[i].size()/2;
        for(int j=metade; j<teste[i].size();j++) {
            teste[i][j]-=1;
        }
        cout << teste[i] << endl;
    }
}