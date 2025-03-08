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

//Nome: Flores de Fogo
//Assunto: Geometria
//Competição/criador: Márcio Oshiro Brasil
//https://judge.beecrowd.com/pt/problems/view/1039

using namespace std;

int main() { _

    int r1, x1, y1, r2, x2, y2;

    while (cin >> r1 >> x1 >> y1 >> r2 >> x2 >> y2) {
        double d = sqrt((x1-x2)*(x1-x2) + (y1-y2)*(y1-y2));
        if (r1-r2 >= d) cout << "RICO" << endl;
        else cout << "MORTO" << endl;
    }

    return 0;
}