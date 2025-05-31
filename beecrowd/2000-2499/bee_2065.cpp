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

//Nome: Fila do Supermercado
//Assunto: Fila de prioridade
//Competição/criador: Cristhian Bonilha, UTFPR BR Brazil
//https://judge.beecrowd.com/pt/problems/view/2065

using namespace std;

int main() { _

    int n, m, vi, cj, last;

    cin >> n >> m;

    priority_queue<pair<int, pair<int, int>>> func;
    queue<int> clientes;
    pair<int, pair<int, int>> par;

    for(int i=0; i<n; i++) {
        cin >> vi;
        par.second = make_pair((-i), (-1 * vi)); //como a priority_queue está em maxHeap e pretendemos atuar como se fosse minHeap, realize-se o casting do input para o valor oposto, multiplicando por -1
        par.first = (0);
        func.push(par);
    }

    //adicionando o numero de itens de cada cliente na queue
    for(int i=0; i<m; i++) {
        cin >> cj;
        clientes.push(cj);      
    }

    while(!clientes.empty()) {
        par = func.top();
        func.pop();
        //cout << par.second.second;
        par.first -= par.second.second*(-1)*clientes.front();
        //cout << "pair<int, pair<int, int>> = pair< " << par.first << ", pair< " << par.second.first << ", " << par.second.second << ">>" << endl;
        func.push(par);
        clientes.pop();
    }
    
    while(!func.empty()) {
        last = (-1) * func.top().first;
        func.pop();
    }

    cout << last << endl;

    return 0;
}