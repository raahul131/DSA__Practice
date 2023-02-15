#include<iostream>
using namespace std;

void insertionSort(int arr[], int n){

    for(int i = 1; i < n; i++){
        int ans = arr[i];
        int j = i-1;
        for(; j >= 0; j--){
            if(arr[j] > ans){
                // shift
                arr[j+1] = arr[j];
            }
            else{
                break;
            }
        }
        arr[j+1] = ans;
    }

}

void printArray(int arr[], int n){
    for(int i = 0; i < n; i++){
        cout << arr[i] << " ";
    }
    cout << endl;

}

int main(){

    int n;
    cin >>n;
    int array[100];

    for(int i = 0; i < n; i++){
        cin >> array[i];
    }


    insertionSort(array, n);
    printArray(array, n);

    return 0;
}