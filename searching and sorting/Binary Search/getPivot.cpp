#include<iostream>
using namespace std;

int getPivot(int arr[], int n){

    int start = 0;
    int end = n-1;
    int mid = start + ( end - start)/2;

    while(start < end){
        if(arr[mid] >= arr[0]){
            start = mid+1;
        }
        else{
            end = mid;
        }

        mid = start + (end - start)/2;
    }

    return start;

}

int main(){

    int n;
    cin >> n;
    int array[100];
    for(int i = 0; i < n; i++){
        cin >> array[i];
    }

    cout << getPivot(array, n);

    

    return 0;
}