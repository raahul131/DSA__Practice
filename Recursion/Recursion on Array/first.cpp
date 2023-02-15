#include<iostream>
using namespace std;

void printArray(int *array, int index, int n){

    // base case
    if(index == n){
        return;
    }
    // self work
    cout << array[index] << " ";
    // assume that it will work
    printArray(array, index+1, n);
    
}

int main(){

    int n;
    cin >> n;
    int array[n];
    for(int i = 0; i < n; i++){
        cin >> array[i];
    }

    int index = 0;
    printArray(array, index, n);  

    return 0;
}