#include<iostream>
using namespace std;

void sort012(int arr[], int size){

    int low = 0;
    int mid = 0;    
    int high = size-1;

    while(mid <= high){

        if(arr[mid] == 0){
            swap(arr[mid], arr[low]);
            mid++;
            low++;
        }
        else if(arr[mid] == 1){
            mid++;
        }
        else {
            swap(arr[mid], arr[high]);
            high--;
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
    sort012(array, size);
    printArray(array, size);

}