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

//Nome: Quanta Mandioca?
//Assunto: Desconhecido
//Competição/criador: Felipe C. Ochial, URI BR Brazil
//https://judge.beecrowd.com/pt/problems/view/2936

using namespace std;

int main() { _

    int ttl=225, p, n=5;

    while(n--) {
        cin >> p;
        switch(n){

            case 4:
                ttl+=p*300;
                break;

            case 3:
                ttl+=p*1500;
                break;

            case 2:
                ttl+=p*600;
                break;

            case 1:
                ttl+=p*1000;
                break;
            
            case 0:
                ttl+=p*150;
                break;
        }
    }

    cout << ttl << endl;

    return 0;
}