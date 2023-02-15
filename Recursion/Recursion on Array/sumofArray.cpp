#include<iostream>
using namespace std;

int sumOfArray(int *array, int index, int n){

    //base case
    if(index == n-1){
        return array[index];
    }

    return array[index] + sumOfArray(array, index+1, n);
}


int main(){

    int n;
    cin >> n;

    int array[n];
    for(int i = 0; i < n; i++){
        cin >> array[i];
    }

    int index = 0;

    cout << sumOfArray(array, index, n);
    return 0;
}