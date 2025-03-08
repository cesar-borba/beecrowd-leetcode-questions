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

//Nome: Quadrante
//Assunto: Repetiçção
//Competição/criador: Neilor Tonin, URI Brasil
//https://judge.beecrowd.com/pt/problems/view/1115

using namespace std;

int main() { _

    vector<string> quad = {"primeiro", "segundo", "terceiro", "quarto"};

    int x, y;

    cin >> x >> y;

    while(x != 0 && y != 0) {

        if (x > 0) {
            if (y > 0) cout << quad[0] << endl;
            else cout << quad[3] << endl;
        }
        else {
            if (y > 0) cout << quad[1] << endl;
            else cout << quad[2] << endl;
        }

        cin >> x >> y;
    }

    return 0;
}