#include <bits/stdc++.h>

//Nome: Vende-se
//Assunto: Desconhecido
//Competição/criador: OBI 2013
//https://judge.beecrowd.com/pt/problems/view/2433

using namespace std;

int main()
{
    int n, k;

    cin >> n >> k;

    vector<int> predios(n);

    for (int &x : predios)
    {
        cin >> x;
    }

    sort(predios.begin(), predios.end());

    int dist = INT_MAX;

    for(int i=0; i<=k; i++) {
        int minimo = predios[i];
        int maximo = predios[i+n-k-1];
        dist = min(dist, maximo-minimo);
    }

    cout << dist << endl;

    return 0;

}