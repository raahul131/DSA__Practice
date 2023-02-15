#include<bits/stdc++.h>
using namespace std;

bool isPossible(int stalls[], int size, int cows, int mid){

    int cowsCount = 1;
    int lastPosition = stalls[0];

    for(int i = 0; i < size; i++){
        if(stalls[i] - lastPosition >=mid){
            cowsCount++;
            if(cowsCount == cows){
                return true;
            }
            lastPosition = stalls[i];
        }
    }
    return false;
}

int aggresiveCows(int stalls[], int size, int cows){

    int maxi = -1;
    for(int i = 0; i < size; i++){
        maxi = max(maxi, stalls[i]);
    }

    int start = 0;
    int end = maxi;

    int mid = start + (end-start)/2;

    int ans = -1;
    while(start <= end){

        if(isPossible(stalls, size, cows, mid)){
            ans = mid;
            start = mid+1;
        }
        else{
            end = mid-1;
        }
        mid = start + (end-start)/2;
    }
    return ans;

}

int main(){

    int size;
    cin >> size;

    int stalls[100];
    for(int i = 0; i < size; i++){
        cin >> stalls[i];
    }

    int cows;
    cin >> cows;

    cout << aggresiveCows(stalls, size, cows);


}