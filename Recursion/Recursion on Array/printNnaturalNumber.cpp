#include<iostream>
using namespace std;

int printNNaturalNumber(int n){

    // base case
    if(n == 0){
        return 0;
    }

    
    return printNNaturalNumber(n-1) + ((n%2 == 0) ? (-n) : (+n));
}

int main(){

    int n;
    cin >> n;

    cout << printNNaturalNumber(n);

    return 0;
}