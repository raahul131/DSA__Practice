#include<iostream>
using namespace std;

int findDuplicates(int arr[], int size){

    int ans = 0;
    for(int i = 0; i < size; i++){
        ans =  ans ^ arr[i];
    }

    for(int i = 1; i < size; i++){
        ans = ans ^ i;
    }

    return ans;
}

int main(){

    int size;
    cin >> size;

    int array[100];
    for(int i = 0; i < size; i++){
        cin >> array[i];
    }


    cout << findDuplicates(array, size);

    return 0;
}