#include <bits/stdc++.h>
#define pb push_back
#define mp make_pair
#define f first
#define s second
#define _ ios_base::sync_with_stdio(0);cin.tie(0);
#define dbg(x) cout << #x << " = " << x << endl

//Nome: Catálogo de Livros
//Assunto: Ordenação
//Competição/criador: Por Thalyson Nepomuceno, Universidade Estadual do Ceará
//https://judge.beecrowd.com/pt/problems/view/1802

using namespace std;

int main() { _

    vector<vector<int>> matriz(5);

    int b[5], x;

    for(int i=0;i<5;i++) {
        
        cin >> b[i];

        for (int j = 0; j < b[i]; j++)
        {
            cin >> x;
            matriz[i].pb(x);
        }
    }

    vector<int> results;

    for (int i = 0; i < b[0];i++) {
        for (int j = 0; j < b[1];j++) {
            for (int k = 0; k < b[2];k++) {
                for (int l = 0; l < b[3];l++) {
                    for (int m = 0; m < b[4];m++) {
                        results.pb(matriz[0][i] + matriz[1][j] + matriz[2][k] + matriz[3][l] + matriz[4][m]);
                    }
                }
            }
        }
    }

    sort(results.begin(), results.end(), greater<int>());
    
    cin >> x;
    int soma=0;

    for (int i = 0; i < x; i++)
    {
        soma+=results[i];
    }
    
    cout << soma << endl;

    return 0;
}