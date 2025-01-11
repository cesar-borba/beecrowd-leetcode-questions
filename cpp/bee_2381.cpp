#include <bits/stdc++.h>

//Nome: Lista de Chamada
//Assunto: Ordenação, Sort
//Competição/criador: OBI 2010
//https://judge.beecrowd.com/pt/problems/view/<number>

using namespace std;

int main() {
    
    int n, k;

    cin >> n >> k;
    cin.ignore();

    vector<string> nomes(n);

    for (string &t : nomes) {
        getline(cin, t);
    }

    sort(nomes.begin(), nomes.end());

    cout << nomes[k-1] << endl;

    return 0;
}