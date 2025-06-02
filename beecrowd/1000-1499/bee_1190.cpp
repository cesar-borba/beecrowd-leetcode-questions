#include <bits/stdc++.h>
#define pb push_back
#define mp make_pair
#define f first
#define s second
#define _ ios_base::sync_with_stdio(0);cin.tie(0);
#define dbg(x) cout << #x << " = " << x << endl
#define print(x) cout << x << "\n"

typedef long long ll;

const int INF = 0x3f3f3f3f;
const ll LINF = 0x3f3f3f3f3f3f3f3fll;

using namespace std;

//Nome: Área Direita
//Assunto: Matrizes
//Competição/criador: Neilor Tonin, URI Brasil
//Nível: 1
//https://judge.beecrowd.com/pt/problems/view/1190

int main() { _

    char c;
    cin >> c;
    double mat[12][12];
    double soma=0;

    for (int i = 0; i < 12; i++)
    {
        for (int j = 0; j < 12; j++)
            cin >> mat[i][j];
    }

    for (int i = 1; i <= 5; i++)
    {
        for (int j = i; j <= 11-i; j++)
            soma+=mat[j][12-i];
    }
    
    cout << fixed << setprecision(1) << ((c=='S') ? soma : (soma/30)) << endl;

    return 0;
}