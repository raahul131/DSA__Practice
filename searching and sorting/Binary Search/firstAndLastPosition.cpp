#include<bits/stdc++.h>
using namespace std;

vector<int> firstAndLastPosition(vector<int> &array, int n, int key){

    vector<int> ans;
    int temp = -1;

    int firstPosition = 0;

    int start = 0;
    int end = n-1;
    int mid = start + (end-start)/2;

    while(start <= end){
        if(array[mid] == key){
            temp = mid;
            end = mid-1;
        }
        else if(array[mid] < key){
            start = mid+1;
        }
        else{
            end = mid-1;
        }
        mid = start + (end-start)/2;
    }
    ans.push_back(temp);

    start = 0;
    end = n-1;
    mid = start + (end-start)/2;

    temp = -1;
    while(start <= end){
        if(array[mid] == key){
            temp = mid;
            start = mid+1;
        }
        else if(array[mid] < key){
            start = mid+1;
        }
        else{
            end = mid-1;
        }
        mid = start + (end-start)/2;
    }
    ans.push_back(temp);

    return ans;

}

int main(){


    

    return 0;
}