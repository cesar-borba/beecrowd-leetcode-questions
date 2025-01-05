#include <bits/stdc++.h>

//https://judge.beecrowd.com/pt/problems/view/1253

using namespace std;

int main() {

    int a;

    cin >> a;
    cin.ignore();

    vector<string> frases;
    vector<int> nums;

    for(int i=0; i<a;i++) {
        string frase;
        int num;
        getline(cin, frase);
        frases.push_back(frase);
        cin >> num;
        nums.push_back(num);
        cin.ignore();
    }

    for(int i=0; i<frases.size();i++){
        for(int j=0; j<frases[i].size(); j++) {
            if((frases[i][j]-nums[i]) < 65) frases[i][j]+=26;
            frases[i][j]-=nums[i];
        }
        cout << frases[i] << endl;
    }

    //'A'=65 / 'Z'=90

    return 0;
}