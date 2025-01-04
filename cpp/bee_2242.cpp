#include <bits/stdc++.h>

//https://judge.beecrowd.com/pt/problems/view/2242

using namespace std;

bool checaVogal(char letra) {
    string vogais = "aeiou";

    for(int i=0; i< vogais.size(); i++){
        if (letra==vogais[i])
            return true;
    }

    return false;
    
}

int main() {

string s, resp, contr;

getline(cin, s);

for(int i=0; i<s.length();i++) {
    if(checaVogal(s[i])) resp += s[i];
}

for(int i=resp.length()-1; i>=0;i--) {
    contr+=resp[i];
}

cout << (resp == contr ? "S" : "N") << endl;

return 0;

}