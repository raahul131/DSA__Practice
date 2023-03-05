#include <bits/stdc++.h>
using namespace std;

int secondLargestElement(int arr[], int n)
{

    int largest = arr[0];
    int secondLargest = -1;

    for (int i = 1; i < n; i++)
    {
        if (arr[i] > largest)
        {
            secondLargest = largest;
            largest = arr[i];
        }
        else if (arr[i] < largest && arr[i] > secondLargest)
        {
            secondLargest = arr[i];
        }
    }
    return secondLargest;
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

    cout << secondLargestElement(array, n);
}