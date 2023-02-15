#include<bits/stdc++.h>
using namespace std;

void binaryToDecimal(string str){

    int base = 1;
    int ans = 0;

    int size = str.length();
    for(int i = size-1; i >= 0; i--){
        ans += ((int)(str[i] - '0')*base);
        base *= 2;
    }
    cout << ans;
}

int main(){

    string str;
    cin >> str;

    binaryToDecimal(str);

    return 0;
}