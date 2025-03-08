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

//Nome: Pares e Ímpares
//Assunto: Sort
//Competição/criador: Neilor Tonin, URI Brasil
//https://judge.beecrowd.com/pt/problems/view/1259

using namespace std;

int main() { _

    vector<int> pares, impares;

    int n;

    cin >> n;

    while(n--) {
        int a;
        cin >> a;
        a%2 == 0 ? pares.pb(a) : impares.pb(a);
    }

    sort(pares.begin(), pares.end());
    sort(impares.begin(), impares.end(), greater<int>());

    for (int i = 0; i < impares.size(); i++)
    {
        pares.pb(impares[i]);
    }

    for (int n : pares) cout << n << endl;
    
    return 0;
}