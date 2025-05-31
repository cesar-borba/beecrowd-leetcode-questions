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

//Nome: Árvore de Natal
//Assunto: Ad Hoc, substr
//Competição/criador: Neilor Tonin, beecrowd BR Brazil
//Nível: 1
//https://judge.beecrowd.com/pt/problems/view/1768

void imprimeArvore(int a) {
    for (int i = 1; i <= a ; i+=2)
    {
        for (int j = 0; j < (a-i)/2; j++) cout << ' ';
        for (int k = 0; k < i; k++) cout << '*';
        cout << endl;
    }
    for (int i = 0; i < (a-1)/2; i++) cout << ' ';
    cout << "*" << endl;
    for (int i = 0; i < (a-3)/2; i++) cout << ' ';
    cout << "***" << endl;
    cout << endl;
}

int main() { _

    int n;

    while(cin >> n) {
        imprimeArvore(n);
    }

    return 0;
}