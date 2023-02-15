#include<iostream>
using namespace std;

void multipleOfNumber(int number, int k){

    // base case
    if(k == 0){
        return;
    }

    multipleOfNumber(number, k-1);
    cout << (number*k) << " "; 
}

int main(){

    int number, k;
    cin >> number >> k;

    multipleOfNumber(number, k);

    return 0;
}