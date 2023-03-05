#include <bits/stdc++.h>
using namespace std;

int maxElement(int arr[], int n)
{

    int maxi = INT_MIN;

    for (int i = 0; i < n; i++)
    {
        if (arr[i] > maxi)
        {
            maxi = arr[i];
        }
    }

    return maxi;
}

int main()
{

    int n;
    cin >> n;
    int array[100];
    for (int i = 0; i < n; i++)
    {
        cin >> array[i];
    }

    cout << maxElement(array, n);
}