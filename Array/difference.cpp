// find the difference between the sum of elements at odd index and even indexes

#include<iostream>
using namespace std;

int differenceBetweensumOfOddAndEven(int arr[], int size){

    // int sumOfOddIndexes = 0;
    // int sumOfEvenIndexes = 0;
    // int ans;
    // for(int i = 0; i < size; i += 2){
    //     sumOfEvenIndexes += arr[i];
    // }

    // for(int i = 1; i < size; i += 2){
    //     sumOfOddIndexes += arr[i];
    // }
    // return ans = sumOfEvenIndexes - sumOfOddIndexes;


    int ansSum = 0;

    for(int i = 0; i < size; i++){
        if(i%2 == 0){
            ansSum += arr[i];
        }
        else{
            ansSum -= arr[i];
        }
    }

    return ansSum;
    
}

int main(){

    int size
    ;
    cin >> size;

    int array[100];
    for(int i = 0; i < size; i++){
        cin >> array[i];
    }

    
    cout << differenceBetweensumOfOddAndEven(array, size);
}