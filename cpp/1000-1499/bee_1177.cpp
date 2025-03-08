#include <bits/stdc++.h>
#define pb push_back
#define mp make_pair
#define f first
#define s second
#define _ ios_base::sync_with_stdio(0);cin.tie(0);
#define dbg(x) cout << #x << " = " << x << endl

typedef long long ll;

const int INF = 0x3f3f3f3f;
const ll LINF = 0x3f3f3f3f3f3f3f3fll;

//Nome: Preenchimento de Vetor II
//Assunto: Vetores
//Competição/criador: Neilor Tonin, URI Brasil
//https://judge.beecrowd.com/pt/problems/view/1177

using namespace std;

int main() { _

    int t, n=0;

    cin >> t;

    for (int i = 0; i < 1000; i++)
    {
        cout << "N[" << i << "] = " << n << endl;
        if(n==(t-1)) n=0;
        else n++;
    }
    

    return 0;
}