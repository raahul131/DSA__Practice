#include<iostream>
#include<string>
using namespace std;

string removeOccurencesOfA(string &s, int index){

    // base case
    if(index == s.length()){
        return "";
    }
    
    string current = "";
    current += s[index];

    return ((s[index] == 'a') ? "" : current) + removeOccurencesOfA(s, index + 1);
}


int main(){

    string s;
    cin >> s;

    cout << removeOccurencesOfA(s, 0);

    return 0;
}