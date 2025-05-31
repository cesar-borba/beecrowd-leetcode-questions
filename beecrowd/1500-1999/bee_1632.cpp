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

//Nome: Variações
//Assunto: Ad-hoc
//Competição/criador: Cristhian Bonilha, UTFPR BR Brazil
//Nível: 1
//https://judge.beecrowd.com/pt/problems/view/1632

int main() { _

    int n;
    cin >> n;
    cin.ignore();
    while(n--) {
        string seq;
        getline(cin, seq);
        int var=1;
        for(char c : seq) {
            c = toupper(c);
            if (c == 'A' || c == 'E' || c == 'I' || c == 'S' || c == 'O') var*=3;
            else var*=2;
        }
        
        cout << var << endl;
    }

    return 0;
}