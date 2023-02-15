#include<iostream>
using namespace std;

int findMaxValue(int *array, int index, int n){

    // base case
    if(index == n-1)
        return array[index];


    return max(array[index], findMaxValue(array, index+1, n));

}


int main(){

    int n;
    cin >> n;
    int array[n];

    for(int i = 0; i < n; i++){
        cin >> array[i];
    }

    int index = 0;

    cout << findMaxValue(array, index, n);
}