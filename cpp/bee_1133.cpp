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

//Nome: Resto da Divisão
//Assunto: Repetição
//Competição/criador: Neilor Tonin, URI Brasil
//https://judge.beecrowd.com/pt/problems/view/1133

using namespace std;

int main() { _

    int x, y, val;

    cin >> x >> y;

    if(x>y) {
        val = x;
        x = y;
        y = val;
    }

    x++;

    while (x<y) {
        if (x%5==0) x+=2;
        if (x%5==1) x+=1;
        if (x%5==4) x+=3;
        if(x<y) cout << x << endl;
        if (x%5==2) x+=1;
        else x+=4;
    }

    return 0;
}