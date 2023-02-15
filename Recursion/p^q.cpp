#include<iostream>
using namespace std;

// int powerCalculation(int p, int q){

//     if(q == 0 || q == 1){
//         return p;
//     }
//     return p * powerCalculation(p, q-1); 
// }


// OR

int powerCalculation(int p, int q){

    // base case
    if( q == 0){
        return 1;
    }

    if( q % 2 == 0){
        int result = powerCalculation(p, q/2);
        return result * result;
    }
    else {
        int result = powerCalculation(p, (q-1)/2);
        return p * result * result;
    }
    
}

int main(){

    int p, q;
    cin >> p >> q;

    cout << powerCalculation(p, q);

    return 0;
}