// find the total number of the pair whose sum is equal to the given target

#include<iostream>
#include<vector>
using namespace std;

int totalPairOfTarget(vector<int> vec, int size, int target){

    int count = 0;
    for(int i = 0; i < vec.size(); i++){
        for(int j = i+1; j < vec.size(); j++){
            if(vec[i] + vec[j] == target){
                count++;
            }
        }
    }
    return count;
}

int main(){

    int size;
    cin >> size;

    vector<int> v(size);
    for(int i = 0; i < v.size(); i++){
        cin >> v[i];
    }
    

    int target;
    cin >> target;

    cout << totalPairOfTarget(v,size,target);

}