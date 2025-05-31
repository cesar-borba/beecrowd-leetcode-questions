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

//Nome: Lista de Compras
//Assunto: Mapa
//Competição/criador: Women Contest 2018 / Michele Selivon, URI BR Brazil
//https://judge.beecrowd.com/pt/problems/view/2729

using namespace std;

int main() { _

    int n;

    cin >> n >> ws;

    while(n--) {
    string seq, palavra;
    list<string> plvs;
    getline(cin, seq);

    istringstream  ss(seq);

    while(ss >> palavra) {
        plvs.pb(palavra);
    }
        
        plvs.sort();
        plvs.unique();

        for (auto it=plvs.begin(); it != plvs.end(); it++) {
            if(it != plvs.begin()) cout << " ";
            cout << *it;
        }

        cout << endl;
    }
    
    return 0;
}