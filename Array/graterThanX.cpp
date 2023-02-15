#include<iostream>
#include<vector>
using namespace std;

int greaterThanX(vector<int>vec, int x){
    
    int count = 0;
    for(int i = 0; i < vec.size(); i++){
        if(vec[i] > x){
            count++;
        }
    }
    return count;
}


vector<int> greaterThanX1(vector<int>vec, int x){
    
    vector<int>v1;
    for(int i = 0; i < vec.size(); i++){
        if(vec[i] > x){
            v1.push_back(vec[i]);
        }
    }
    return v1;
}


int main() {

    vector<int>v(5);
    for(int i = 0; i < v.size(); i++){
        cin >> v[i];
    }

    int x;
    cin >> x;

    cout << greaterThanX(v, x);

    greaterThanX1(v, x);

}
