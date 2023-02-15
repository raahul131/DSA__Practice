#include<iostream>
using namespace std;

int GCD(int x, int y){

    // base case
    if(x == 0){
        return y;
    }
    if(y == 0){
        return x;
    }

    if(x > y){
        return GCD(y, x-y);
    }
    else{
        return GCD(x, y-x);
    }
}

int main() {

    int x, y;
    cin >> x >> y;

    cout << GCD(x, y);

    return 0;
}