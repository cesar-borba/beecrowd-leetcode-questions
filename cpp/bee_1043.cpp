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

//Nome: Triângulo
//Assunto: Seleção
//Competição/criador: Neilor Tonin, URI Brasil
//https://judge.beecrowd.com/pt/problems/view/1043

using namespace std;

bool ehTriangulo(float ladoA, float ladoB, float ladoC) {

    if ((ladoA + ladoB > ladoC) && (ladoA + ladoC > ladoB) && (ladoB + ladoC > ladoA)) return true;
    else return false;
}

int main() { _

    float a, b, c;

    cin >> a >> b >> c;

    if (ehTriangulo(a, b, c)) cout << fixed << setprecision(1) << "Perimetro = " << (a+b+c) << endl;
    else cout << fixed << setprecision(1) << "Area = " << ((a+b)*c)/2 << endl;

    return 0;
}