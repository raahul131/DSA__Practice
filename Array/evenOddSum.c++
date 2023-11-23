#include<iostream>
using namespace std;

int main(){

    int size;
    cin >> size;

    int arr[100];

    for(int i = 0; i < size; i++){
        cin >> arr[i];
    }

    int answerSum = 0;

    for(int i = 0; i < size; i++){
        if(i%2 == 0){
            answerSum = answerSum + arr[i];
        }
        else{
            answerSum = answerSum - arr[i];
        }
    }

    cout << answerSum;

    return 0;
}
