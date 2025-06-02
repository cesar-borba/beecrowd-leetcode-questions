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

//Nome: Tipos de Triângulos
//Assunto: Seleção
//Competição/criador: Neilor Tonin, URI Brasil
//Nível: 4
//https://judge.beecrowd.com/pt/problems/view/1045

void angulo(double a, double b, double c) {
    a=pow(a, 2);
    b=pow(b, 2);
    c=pow(c, 2);
    cout << "TRIANGULO ";
    if(a == (b+c)) cout << "RETANGULO";
    else if(a > (b+c)) cout << "OBTUSANGULO";
    else cout << "ACUTANGULO";
    cout << endl;
}

void lado(double a, double b, double c) {
    if(a==b && b==c) cout << "TRIANGULO EQUILATERO" << endl;
    else if((a!=b && a==c) || (a!=c && a==b) || (b!=a && b==c)) cout << "TRIANGULO ISOSCELES" << endl;
}

int main() { _

    vector<double> vec(3);
    cin >> vec[0] >> vec[1] >> vec[2];
    sort(vec.begin(), vec.end(), greater<>());
    if(vec[0]>=vec[1]+vec[2]) cout << "NAO FORMA TRIANGULO" << endl;
    else {
        angulo(vec[0], vec[1], vec[2]);
        lado(vec[0], vec[1], vec[2]);
    }

    return 0;
}