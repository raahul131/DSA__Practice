#include<bits/stdc++.h>
using namespace std;

bool isSubSeq(string s1, string s2, int n, int m){

    int j = 0;
    for(int i = 0; i < n && j < m; i++){
        if(s1[i] == s2[j]){
            j++;
        }
    }
    return (j == m);
}

int main(){

    string str = "geeksforgeeks";
    string str1 = "rf";
    int n = str.length();
    int m = str1.length();

    cout << isSubSeq(str, str1, n, m);

    return 0;
}