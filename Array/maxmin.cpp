#include<bits/stdc++.h>
using namespace std;

int getMax(int num[], int size){
    int maxi = INT_MIN;

    for(int i = 0; i < size; i++){
        if(num[i] > maxi){
            maxi = num[i];
        }
    }
    return maxi;
}

int getMin(int num[], int size){
    int mini = INT_MAX;

    for(int i = 0; i < size; i++){
        if(num[i] < mini){
            mini = num[i];
        }
    }
    return mini;

}

int main() {

int size;
cin >> size;

    int arr[100];
    for(int i = 0; i < size; i++){
        cin >> arr[i];
    }

    cout << "maxi value is: " << getMax(arr, size) << endl;
    cout << "mini value is: " << getMin(arr, size) << endl;

    return 0;
}