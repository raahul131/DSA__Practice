#include<iostream>
using namespace std;

void reverseAlternate(int arr[], int size){

    for(int i = 0; i < size; i = i+2){
        if(i+1 < size){
            swap(arr[i], arr[i+1]);
        }
    }
}

void printArray(int arr[], int size){
    for(int i = 0; i < size; i++){
        cout << arr[i] << " ";
    }
    cout << endl;
}

int main() {

    int size;
    cin >> size;

    int array[100];
    for(int i = 0; i < size; i++){
        cin >> array[i];
    }

    printArray(array, size);
    reverseAlternate(array, size);
    printArray(array, size);


    return 0;
}