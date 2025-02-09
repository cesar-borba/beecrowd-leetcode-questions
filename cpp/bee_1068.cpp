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

//Nome: Balanço de Parênteses
//Assunto: Pilha
//Competição/criador: Neilor Tonin, URI Brasil
//https://judge.beecrowd.com/pt/problems/view/1068

using namespace std;

int main() { _
    
    string express;
    
    while(getline(cin >> ws, express)) {
        stack<char> p;
        bool valida = true;
        
        for (int i = 0; i < express.size(); i++) {
            if(express[i] == '(') {
                p.push('(');
            } else if (express[i] == ')') {
                if (p.empty()) {
                    valida = false;
                    break;
                } else {
                    p.pop();
                }
            }
        }
        
        if(!valida || !p.empty()) {
            cout << "incorrect\n";
        } else {
            cout << "correct\n";
        }
    }
    
    return 0;
}