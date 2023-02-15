#include<iostream>
#include<vector>
using namespace std;

int totalOccurence(vector<int>v, int x){
    int count = 0;
    for(int i = 0; i < v.size(); i++){
        if(v[i] == x){
            count++;
        }
    }
    return count;
}

int main() {

    vector<int>v(10);
    for(int i = 0; i < v.size(); i++){
        cin >> v[i];
    }

    int x;
    cin >> x;

    cout << totalOccurence(v, x);

}