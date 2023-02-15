#include<bits/stdc++.h>
using namespace std;

int main(){

    string str = "geeks";

    cout << str << endl;

    string newstring = "";

    int l = str.length()-1;
    
    while(l >= 0){
        newstring += str[l];
        l--;
    }

    cout << newstring << endl;

    return 0;
}