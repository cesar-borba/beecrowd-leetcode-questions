#include <bits/stdc++.h>

//https://judge.beecrowd.com/pt/problems/view/1234

using namespace std;

int main() {
    string sentence;

    while(getline(cin, sentence)) {
        bool to_upper = true;


        for(int i = 0; i< sentence.length(); i++) {
            if(sentence[i] != ' ') {
                if(to_upper) {
                    sentence[i] = toupper(sentence[i]);
                }
                else {
                    sentence[i] = tolower(sentence[i]);
                }
                to_upper = !to_upper;
            }
        }

        cout << sentence << endl;

    }

    return 0;
}