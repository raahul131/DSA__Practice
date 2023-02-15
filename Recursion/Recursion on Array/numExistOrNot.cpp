#include<bits/stdc++.h>
using namespace std;

bool targetPresentOrNot(int *arr, int size, int target, int index){
    
    // base case
    if(index == size){
        return false;
    }

    return (arr[index] == target || targetPresentOrNot(arr, size, target, index+1));

}

int main(){

    int n;
    cin >> n;
    int array[n];
    for(int i = 0; i < n; i++){
        cin 
        >> array[i];
    }

    int target;
    cin >> target;

    cout << targetPresentOrNot(array, n, target, 0);

    return 0;
}