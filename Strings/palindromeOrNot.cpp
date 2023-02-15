#include<bits/stdc++.h>
using namespace std;

int main(){

    // string str = "ababa";
    
    // string newString = "";

    // int len = str.length()-1;
    // while(len >= 0){
    //     newString += str[len--];
    // } 

    // if(str == newString){
    //     cout << "it is palindrome";
    // }
    // else{
    //     cout << "it is not palindrome";
    // }


    string str = "ab";

    int start = 0;
    int end = str.length()-1;
    while( start <= end){
        if(str[start] != str[end]){
            cout << "False";
            return 0;
        }
        else{
            start++;
            end--;
        }
    }
    cout << "True";

    return 0;
}