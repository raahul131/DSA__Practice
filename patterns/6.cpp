#include<iostream>
using namespace std;

int main(){

    int n;
    cin >> n;

    for(int i = n; i >= 0; i--)
    {
        int k = 1;
        for( int j = 0; j < i; j++)
        {
            cout << k << " ";
            k++;
        }
        cout << endl;
    }
}