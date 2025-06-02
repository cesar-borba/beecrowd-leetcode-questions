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

//Nome: Soma de Ímpares Consecutivos III
//Assunto: Repetição
//Competição/criador: Neilor Tonin, URI Brasil
//Nível: 1
//https://judge.beecrowd.com/pt/problems/view/1158

bool ehImpar(int n) {
    if(n%2==1) return true;
    return false;
}

int main() { _

    int n;
    cin >> n;

    while(n--) {
        int a, b, soma=0;
        cin >> a >> b;
        if(ehImpar(a)) {
            soma+=a;
            for (int i = 1; i < b; i++)
                soma+=a+i*2;
        }
        else {
            for (int i = 0; i < b; i++)
                soma+=a+1+i*2;
        }
        cout << soma << endl;
    }

    return 0;
}