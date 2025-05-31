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

//Nome: Fatorial Simples
//Assunto: Repetição
//Competição/criador: Neilor Tonin, URI Brasil
//https://judge.beecrowd.com/pt/problems/view/1153

using namespace std;

int fat(int num) {
    if (num == 1)
        return 1;
    else
        return num*fat(num-1);
}

int main() { _

    int n;

    cin >> n;

    n=fat(n);

    cout << n << endl;

    return 0;
}