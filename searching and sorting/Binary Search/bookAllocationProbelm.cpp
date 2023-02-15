#include<iostream>
using namespace std;

bool ispossible(int arr[], int size, int students, int mid){

    int studentCout = 1;
    int pageSum = 0;
    for(int i = 0; i < size; i++){
        if(pageSum + arr[i] <= mid){
            pageSum += arr[i];
        }
        else{
            studentCout++;
            if(studentCout > students || arr[i] > mid){
                return false;
            }
            else{
                pageSum = 0;
                pageSum = arr[i];
            }
        }
    }
    return true;
}

int bookAlocationProblem(int arr[], int size, int students){

    int start = 0;
    int sum = 0;
    for(int i = 0; i < size; i++){
        sum += arr[i];
    }
    int end = sum;

    int mid = start + (end-start)/2;

    int ans = -1;

    while(start <= end){
        if(ispossible(arr, size, students, mid)){
            ans = mid;
            end = mid-1;
        }
        else{
            start = mid+1;
        }
        mid = start + (end-start)/2;
    }
    return ans;
}

int main(){

    int n;
    cin >> n;
    int bookArray[100];
    for(int i = 0; i < n; i++){
        cin >> bookArray[i];
    }
    int students;
    cin >> students;

    cout << bookAlocationProblem(bookArray, n, students);



    return 0;
}