#include<bits/stdc++.h>
using namespace std;

void selectionSort(int arr[], int n){

    for(int i = 0; i < n-1; i++){
        int minIndex = i;
        for(int j = i+1; j < n; j++){
            if(arr[j] < arr[minIndex])
                minIndex = j;
        }
        swap(arr[minIndex], arr[i]);
    }

    return;
}

void printArray(int arr[], int n){
    for(int i = 0; i < n; i++){
        cout << arr[i] << " ";
    }
    cout << endl;
}

int main(){

    int n;
    cin >> n;

    int array[n];
    for(int i = 0; i < n; i++){
        cin >> array[i];
    }

    selectionSort(array, n);
    printArray(array, n);


    return 0;
}