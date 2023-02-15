#include<iostream>
using namespace std;

void mergeSort(int a[], int b[], int n, int m){

    int i = 0, j = 0;

    while(i < n && j < m){
        if(a[i] <= b[j]){
            cout << a[i] <<" ";
            i++;
        }
        else{
            cout << b[j] << " ";
            j++;
        }
    }

    while(i < n){
        cout << a[i] << " ";
        i++;
    }

    while(j < m){
        cout << b[j] << " ";
        j++;
    }
}

int main(){

    int n, m;
    cin >> n >> m;
    int array[100];
    int array1[100];
    for(int i = 0; i < n; i++){
        cin >> array[i];
    }

    for(int i = 0; i < m; i++){
        array[i];
    }

    for(int i = 0; i < m; i++){
        array1[i];
    }

    // int a[4] = {1,4,6,8};
    // int b[6] = {3,5,7,8,9,10};

    mergeSort(array, array1, n, m);


    return 0;
}

