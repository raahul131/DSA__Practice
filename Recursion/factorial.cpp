#include<bits/stdc++.h>
using namespace std;

long long factorial(int n){

    // base case
    if(n == 1){
        return 1;
    }

    return n * factorial(n-1);
}

int main(){

    int n;
    cin >> n;

    cout << factorial(n);



    return 0;
} 