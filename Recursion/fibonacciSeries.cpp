#include<iostream>
using namespace std;

int fibonacciNumber(int n){

    // // base case
    // if(n == 0){
    //     return 0;
    // }

    // if(n == 1){
    //     return 1; 
    // }

    // OR
    if(n == 0 || n == 1){
        return n;
    }

    return fibonacciNumber(n-1) + fibonacciNumber(n-2);
}


int main() {

    int n;
    cin >> n;
    
    cout << fibonacciNumber(n);

    return 0;
}