#include<bits/stdc++.h>
using namespace std;

void bubbleSort(int arr[], int n){

    bool flag = false;
    for(int i = 0; i < n-1; i++){
        for(int j = 0; j < n-i-1; j++){
            if(arr[j] > arr[j+1]){
                flag = true;
                swap(arr[j], arr[j+1]);
            }
        }
        if(!flag){
            break;
        }
    }
    return;
}


void printArray(int array[], int n){
    for(int i = 0; i < n; i++){
        cout << array[i] << " ";
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

    bubbleSort(array, n);
    printArray(array, n);



    return 0;
}