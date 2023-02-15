#include<bits/stdc++.h>
using namespace std;

int main() {

    string s;
    cin >> s;

    int q;
    cin >> q;

    map<char, int>mpp;

    for(int i = 0; i < s.size(); i++){
        mpp[s[i]]++;
    }

    while(q--){
        
        char c;
        cin >> c;

        cout << mpp[c] << endl;

    }



    return 0;
}