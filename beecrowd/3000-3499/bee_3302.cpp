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

//Nome: Resposta Certa
//Assunto: Desconhecido
//Competição/criador: Ricardo Martins, Instituto Federal do Sul de Minas Gerais BR Brazil
//https://judge.beecrowd.com/pt/problems/view/3302

using namespace std;

int main() { _

    int n;

    cin >> n;

    int array[n];
    
    for(int i=0; i<n;i++) {
        int a;
        cin >> a;
        array[i] = a;
    }

    for(int i=1; i<=n; i++) {
        cout << "resposta " << i << ": " << array[i-1] << endl;
    }

    return 0;
}