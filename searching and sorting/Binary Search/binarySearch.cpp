#include<iostream>
using namespace std;

int binarySearch(int arr[], int n, int key){

    int low = 0;
    int high = n-1;

    int mid = low + (high - low)/2;

    while(low <= high){

        if(arr[mid] == key){
            return mid;
        }
        else if(arr[mid] < key){
            low = mid+1;
        }
        else{
            high = mid-1;
        }
        mid = low + (high - low)/2;
    }
    return -1;
}

int main(){

    int n;
    cin >> n;
    int array[100];
    for(int i = 0; i <  n; i++){
        cin >> array[i];
    }

    int key;
    cin >> key;

    cout << binarySearch(array, n, key);

    return 0;
}