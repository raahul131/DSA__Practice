#include<iostream>
using namespace std;

void revArray(int arr[], int size){

    int left = 0;
    int right = size-1;

    while(left <= right){
        swap(arr[left++], arr[right--]);
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
    revArray(array, size);
    printArray(array, size);


    return 0;
}