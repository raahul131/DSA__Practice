#include<iostream>
using namespace std;

void merge(int *array, int start, int end){

    int mid = start + (end-start)/2;

    int len1 = mid-start+1;
    int len2 = end-mid;

    int *firstArray = new int[len1];
    int *secondArray = new int[len2];

    int k = start;
    for(int i = 0; i < len1; i++){
        firstArray[i] = array[k++];
    }

    k = mid+1;
    for(int i = 0; i < len2; i++){
        secondArray[i] = array[k++];
    }

    // merging two sorted array logic
    int index1 = 0;
    int index2 = 0;

    k = start;

    while(index1 < len1 && index2 < len2){
        if(firstArray[index1] < secondArray[index2]){
            array[k++] = firstArray[index1++];
        }
        else{
            array[k++] = secondArray[index2++];
        }
    }

    while(index1 < len1){
        array[k++] = firstArray[index1++];
    }

    while(index2 < len2){
        array[k++] = secondArray[index2++];
    }


    // deleting the two created array
    delete []firstArray;
    delete []secondArray;
}


void mergeSort(int *array, int start, int end){

    // base case
    if(start >= end){
        return;
    }

    int mid = start + (end-start)/2;

    // left sort ko sort krna hai
    mergeSort(array, start, mid);

    // right part sort krna hai
    mergeSort(array, mid+1, end);

    merge(array, start, end);
}   

void printArray(int arr[], int n){
    for(int i = 0; i <n; i++){
        cout << arr[i] << " ";
    }
    cout << endl;
}

int main(){

    int n;
    cin >> n;
    int array[100];

    for(int i = 0; i < n; i++){
        cin >> array[i];
    }

    mergeSort(array, 0, n-1);
    printArray(array, n);


    return 0;
}