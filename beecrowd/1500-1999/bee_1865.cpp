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

//Nome: Mjölnir
//Assunto: Desconhecido
//Competição/criador: Ricardo Martins, IFSULDEMINAS BR Brazil
//https://judge.beecrowd.com/pt/problems/view/1865

using namespace std;

int main() { _

    int n, forca;
    string nome;

    cin >> n >> ws;

    while(n--) {
        cin >> nome >> forca;
        if (nome == "Thor") cout << "Y" << endl;
        else cout << "N" << endl;
    }

    return 0;
}