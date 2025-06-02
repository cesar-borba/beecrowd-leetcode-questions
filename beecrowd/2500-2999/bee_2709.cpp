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

//Nome: As Moedas de Robbie
//Assunto: Desconhecido
//Competição/criador: Adriano Pereira Almeida, Centro Universitário Estácio da Amazônia BR Brazil
//Nível: 9
//https://judge.beecrowd.com/pt/problems/view/2709

//confere se é primo ou não em O(sqrt(n))
//código by MaratonUSP

bool ehPrimo(int n) {
    if(n<=1) return false;
    int stop = (int) sqrt(n);
    for (int i = 2; i < stop+1; i++) 
        if(n % i == 0) return false;

    return true;
}

//m
//m vezes
//n (salto)

int main() { _

    int m;

    while(cin >> m) {
        vector<int> vec;
        int soma=0, salto;
        for (int i = 0; i < m; i++) {
            int a;
            cin >> a;
            vec.pb(a);
        }

        cin >> salto;

        for (int i = m-1; i >= 0; i-=salto) {
            soma+=vec[i];
        }

        if(ehPrimo(soma)) cout << "You’re a coastal aircraft, Robbie, a large silver aircraft.";
        else cout << "Bad boy! I’ll hit you.";
        cout << endl;
    }

    return 0;
}