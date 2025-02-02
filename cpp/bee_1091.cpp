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

//Nome: Divisão da Nlogônia
//Assunto: Ad hoc
//Competição/criador: Maratona de Programação da SBC 2008 / Ricardo Anido Brasil
//https://judge.beecrowd.com/pt/problems/view/1091

using namespace std;

int main() { _

    int n;

    cin >> n;

    while (n!=0) {
        int xo,yo, x, y;
        
        cin >> xo >> yo;

        while(n--) {
            cin >> x >> y;
            if(x == xo || y == yo) cout << "divisa" << endl;
            else if (x > xo) {
                if (y > yo) cout << "NE" << endl;
                else cout << "SE" << endl;
            }
            else {
                if (y > yo) cout << "NO" << endl;
                else cout << "SO" << endl;
            }
        }

        cin >> n;
    }

    return 0;
}