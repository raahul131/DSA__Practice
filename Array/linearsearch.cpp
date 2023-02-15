#include<iostream>
using namespace std;

bool linearSearch(int arr[], int size, int key){
    
    for(int i = 0; i < size; i++){
        if(arr[i] == key){
            return true;
        }
    }
    return false;
}

int main(){

    int size;
    cin >> size;

    int array[100];
    for(int i = 0; i < size; i++){
        cin >> array[i];
    }

    int key;
    cin >> key;

    cout << linearSearch(array, size, key);


    return 0;
}