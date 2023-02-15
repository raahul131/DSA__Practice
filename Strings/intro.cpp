#include<iostream>
#include<string>
using namespace std;

int main(){

    string str = "rahul ray yadav";
    cout << str << endl;

    cout << str.find("hul") << endl;

    string a = "abc";
    string b = "abd";
    if(a == b){
        cout << "same" << endl;
    }
    else if(a > b){
        cout << "a is grater" << endl;
    }
    else{
        cout << "a is smaller" << endl;
    }

    cout << str.length() << endl;


    string name;
    cout << "Enter your name?";
    getline(cin , name);

    cout << "Your name is " << name << endl;

    string nam = "add";
    cout << nam.size();


    return 0;
}