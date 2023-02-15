#include<iostream>
using namespace std;

int sqrt(int n){

    int start = 0;
    int end = n;
    int mid = start + (end-start)/2;

    int ans = -1;

    while(start <= end){

        int square = (mid*mid);

        if(square == n){
            return mid;
        }
        else if(square > n){
            end = mid-1;
        }
        else{
            ans = mid;
            start = mid+1;
        }
        mid = start + (end-start)/2;
    }

    return ans;
}

int main(){

    int n;
    cin >> n;

    cout << sqrt(n);

    return 0;
} 