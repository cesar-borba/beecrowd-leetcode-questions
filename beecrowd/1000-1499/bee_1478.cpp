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

//Nome: Matriz Quadrada II
//Assunto: Matrizes
//Competição/criador: Josué Pereira de Castro, Unioeste Brasil
//Nível: 1
//https://judge.beecrowd.com/pt/problems/view/1478

int main() { _

    int n;

    while(cin >> n, n!=0) {
        for (int i = 0; i < n; i++)
        {
            for (int j = 0; j < n; j++) {
                cout << setw(3) << (abs(i-j)+1);
                if (j != n - 1) cout << " ";
            }
            cout << endl;
        }
        cout << endl;
    }

    return 0;
}