#include<iostream>
#include<vector>
using namespace std;

int lastOccurence(vector<int> v, int x){
    
    int occurence = -1;
    for(int i = 0; i < v.size(); i++){
        if(v[i] == x){
            occurence = i;
        }
    }
    return occurence;
}

int main(){

    vector<int>vec(10);
    for(int i = 0; i < 10; i++){
        cin >> vec[i];
    }

    int x;
    cin >> x;


    cout << lastOccurence(vec, x);

}
