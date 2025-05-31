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

//Nome: Troca de Cartas
//Assunto: Ad hoc, Intersecção de Conjuntos
//Competição/criador: Maratona de Programação SBC 2009
//https://judge.beecrowd.com/pt/problems/view/1104

using namespace std;

int main() { _

    int a, b;

    vector<int> answers;

    cin >> a >> b;

    while (a != 0 && b != 0) {
        
        set<int> alice, beatriz;
        
        while(a--) {
            int c; cin >> c;
            alice.insert(c);
        }

        while(b--) {
            int c; cin >> c;
            beatriz.insert(c);
        }

        int max;

        if (alice.size() <= beatriz.size()) {
            
            max = alice.size();

            for(auto carta : alice) {
                if(beatriz.find(carta) != beatriz.end()) {
                    max--;
                }
            }

        } else {
            
            max = beatriz.size();

            for(auto carta : beatriz) {
                if(alice.find(carta) != alice.end()) {
                    max--;
                }
            }

        }

        cin >> a >> b;

        answers.pb(max);
        
    }

    for(int n : answers) cout << n << endl;

    return 0;
}