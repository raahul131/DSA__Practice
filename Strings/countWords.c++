#include<bits/stdc++.h>
using namespace std;

int main(){

    string str = "how are        you";

    int count = 0;
    for(int i = 0; i < str.size(); i++){
        if(str[i] == ' ' && str[i-1] != ' '){
            count++;
        }
    }

    cout << count+1 << endl;

    return 0;
}