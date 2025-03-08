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

//Nome: Sequencia IJ 4
//Assunto: Repetição
//Competição/criador: Neilor Tonin, URI Brasil
//https://judge.beecrowd.com/pt/problems/view/1098

using namespace std;

int main() { _

    float i=0, j;

    while (j<5) {
        j=i;
        for (int cont = 0; cont < 3; cont++)
        {
            j+=1;
            cout << "I=" << i << " J=" << j << endl;
        }
        i+=0.2;
    }

    return 0;
}