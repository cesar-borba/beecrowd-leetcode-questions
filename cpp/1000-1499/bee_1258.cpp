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

struct Camiseta {
    string nome;
    string cor;
    char tam;
};

bool compare(Camiseta &a, Camiseta &b) {

    if(a.cor != b.cor) return a.cor<b.cor;
    else if(a.tam != b.tam) return a.tam > b.tam;
    else return a.nome < b.nome;
}

int main() { _

    int n;
    bool block=true;

    while(cin >> n, n!=0) {
        vector<Camiseta> camisetas;
        while(n--) {
            Camiseta c;
            cin.ignore();
            getline(cin, c.nome);
            //cin.ignore();
            cin >> c.cor >> c.tam;
            camisetas.pb(c);
        }

        sort(camisetas.begin(), camisetas.end(), compare);
        if(!block) cout << endl;
        block=false;
        for (int i = 0; i < camisetas.size(); i++)
        {
            cout << camisetas[i].cor << " " << camisetas[i].tam << " " << camisetas[i].nome << endl;
        }
        
    }

    return 0;
}