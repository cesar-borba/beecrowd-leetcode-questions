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

//Nome: Experiências
//Assunto: Repetição
//Competição/criador: Neilor Tonin, URI Brasil
//https://judge.beecrowd.com/pt/problems/view/1094

using namespace std;

int main() { _

    int n, q, coe=0, rat=0, sap=0;
    char l;

    cin >> n;

    while(n--) {
        cin >> q >> l;
        if (l == 'C')
            coe+=q;
        if (l == 'R')
            rat+=q;
        if (l == 'S')
            sap+=q;
    }

    float ttl = coe+rat+sap;

    cout << "Total: " << ttl << " cobaias" << endl << "Total de coelhos: " << coe << endl << "Total de ratos: " << rat << endl << "Total de sapos: " << sap << endl << "Percentual de coelhos: " << fixed << setprecision(2) << (coe*100/ttl) << " %" << endl << "Percentual de ratos: " << (rat*100/ttl) << " %" << endl << "Percentual de sapos: " << (sap*100/ttl) << " %" << endl;

    return 0;
}