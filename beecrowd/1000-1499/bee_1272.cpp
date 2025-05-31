#include <bits/stdc++.h>

//https://judge.beecrowd.com/pt/problems/view/1272

using namespace std;

int main() {
    
    int a;
    vector<string> vetor;
    string frase;

    cin >> a;
    cin.ignore();

    for(int i=0;i<a;i++) {
        getline(cin, frase);
        //cout << "i: " << i << " | palavra: " << frase << " | lenght: " << frase.length() << endl;
        vetor.push_back(frase);
    }

    for(int i=0; i<vetor.size(); i++) {
        string palavra;
        for(int j=0; j<vetor[i].size(); j++) {
            //cout << "[ "<< vetor[i][j] << " , " << vetor[i][j+1] << " ]"<< endl;
            if(j==0 && vetor[i][j]!=32) {
                palavra+=vetor[i][j];
            }
            if(vetor[i][j+1] != '\0') {//para validar se o próximo caractere realmente existe em memória há se a condicional
                if(vetor[i][j]==32 && vetor[i][j+1]!=32) {
                    //cout << "passou aqui" << endl;
                    palavra+=vetor[i][j+1];
                }
            }
        }
        cout << palavra << endl;
    }


    return 0;
}