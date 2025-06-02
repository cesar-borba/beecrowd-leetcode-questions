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

//Nome: Matriz 123
//Assunto: Matrizes
//Competição/criador: Neilor Tonin, URI Brasil
//Nível: 1
//https://judge.beecrowd.com/pt/problems/view/1534

int main() { _

    int n;

    while(cin >> n) {
        for (int i = 0; i < n; i++)
        {
            for (int j = 0; j < n; j++)
            {
                if(n%2==1){
                    if((i==j && i==n/2) || (abs(j+1-n)==i)) cout << 2;
                    else if(i==j) cout << 1;
                    else cout << 3;
                } else {
                    if(i==j) cout << 1;
                    else if (abs(j+1-n)==i) cout << 2;
                    else cout << 3;
                }
            }
            cout << endl;
        }
    }

    return 0;
}