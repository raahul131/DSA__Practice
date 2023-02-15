#include<iostream>
using namespace std;

int main(){

    int n;
    cin >> n;

    int cnt = 0;
    while( n > 0){
        int lastDigit = n % 10;
        
        cout << "The last digit is " << lastDigit << endl;
        cnt++;
        n = n/10;
    }    
    cout << "Total number of digits is: " << cnt;

    return 0;
}