#include<iostream>
using namespace std;

bool sortedOrNot(int arr[], int size){

    for(int i = 0; i < size; i++){
        if(arr[i] <= arr[i-1]){
            return false;
        }
    }
    return true;
}

int main(){

    int size;
    cin >>size;

    int array[100];
    for(int i = 0;i < size; i++){
        cin >> array[i];
    }


    cout << sortedOrNot(array, size);

}