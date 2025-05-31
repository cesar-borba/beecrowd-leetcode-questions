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

//Nome: Pares, Ímpares, Positivos e Negativos
//Assunto: Repetição
//Competição/criador: Neilor Tonin, URI Brasil
//Nível: 1
//https://judge.beecrowd.com/pt/problems/view/1066

int main() { _

    int par=0, imp=0, pos=0, neg=0, n=5;

    while(n--) {
        int a;
        cin >> a;
        if(a<0) neg++;
        else if (a>0) pos++;

        if(a%2==0) par++;
        else imp++;
    }

    cout << par << " valor(es) par(es)\n";
    cout << imp << " valor(es) impar(es)\n";
    cout << pos << " valor(es) positivo(s)\n";
    cout << neg << " valor(es) negativo(s)\n";

    return 0;
}