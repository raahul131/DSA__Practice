#include<iostream>
using namespace std;

int findUnique(int arr[], int size){
    int ans = 0;
    for(int i = 0; i < size; i++){
        ans = ans ^ arr[i];
    }
    return ans;
}

int main() {

    int size;
    cin >> size;

    int array[100];
    for(int i = 0; i < size; i++){
        cin >> array[i];
    }

    cout << findUnique(array, size);


    return 0;
}