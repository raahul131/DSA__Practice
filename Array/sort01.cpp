#include<iostream>
using namespace std;

void sort01(int arr[], int size){

    int i = 0;
    int j = size-1;

    while(i <= j){
        if(arr[i] == 0){
            i++;
        }
        
        if(arr[j] == 1){
            j--;
        }
        else{
            swap(arr[i++], arr[j--]);
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
    sort01(array, size);
    printArray(array, size);





    return 0;
}