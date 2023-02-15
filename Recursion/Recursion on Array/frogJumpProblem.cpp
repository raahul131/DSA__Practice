#include<bits/stdc++.h>
using  namespace std;

int costCalculation(int *array, int n, int ith){

    // base case
    if(ith == n-1)
        return 0;

    if(ith == n-2)
        return costCalculation(array, n, ith+1) + abs(array[ith] - array[ith+1]);

    return min(costCalculation(array, n, ith+1) + abs(array[ith] - array[ith+1]), costCalculation(array, n, ith+2) + abs(array[ith] - array[ith+2]));

}


int main(){

    int n;
    cin >> n;

    int array[n];
    for(int i = 0; i < n; i++){
        cin >> array[i];
    }

    cout << costCalculation(array, n, 0);

    return 0;
}