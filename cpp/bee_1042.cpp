#include <bits/stdc++.h>
#define pb push_back
#define mp make_pair

//Nome: Sort Simples
//Assunto: Seleção
//Competição/criador: Adaptado por Neilor Tonin, URI Brasil
//https://judge.beecrowd.com/pt/problems/view/1042

using namespace std;

int main() {

    ios::sync_with_stdio(false);

    vector<int> nums(3);
    vector<int> sorted(3);

    for(int i=0; i<3;i++){
        int a;
        cin >> a;
        nums[i]=a;
        sorted[i]=a;
    }

    sort(sorted.begin(), sorted.end());

    for(int x : sorted){
        cout << x << endl;
    }

    cout << endl;

    for(int x : nums){
        cout << x << endl;
    }

    return 0;
}