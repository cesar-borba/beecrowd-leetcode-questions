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

//Nome: Triângulo
//Assunto: Desconhecido
//Competição/criador: Olimpíada Brasileira de Informática - 2014 / Guilherme Albuquerque Pinto, Universidade Federal de Juiz de Fora BR Brazil
//Nível: 3
//https://judge.beecrowd.com/pt/problems/view/1929

bool ehTriangulo(int a, int b, int c) {
    if(a < b+c && b < a+c && c < a+b) return true;
    return false;
}

int main() { _

//a b c d
//4.3.2 = 24/3! -> 4
//a b c
//a b d
//a c d
//b c d

    int a, b, c, d;
    cin >> a >> b >> c >> d;
    cout << ((ehTriangulo(a, b, c) || ehTriangulo(a, b, d) || ehTriangulo(a, c, d) || ehTriangulo(b, c, d)) ? "S\n" : "N\n");

    return 0;
}