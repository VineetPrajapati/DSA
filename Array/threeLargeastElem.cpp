#include <bits/stdc++.h>
using namespace std;

int print3largest(int arr[], int size)
{

    int first, second, thrird;

    if (size < 3)
    {
        cout << "Invalid Input" << endl;
        return -1;
    }

    thrird = first = second = INT_MIN;

    for (int i = 0; i < size; i++)
    {
        if (arr[i] > first)
        {
            thrird = second;
            second = first;
            first = arr[i];
        }
        else if (arr[i] > second && arr[i] != first)
        {
            second = thrird;
            second = arr[i];
        }
        else if (arr[i] > thrird && arr[i] != first && arr[i] != second)
        {
            thrird = arr[i];
        }
    }

    cout << "Three Largest elements are : " << first << " " << second << " " << thrird << endl;
}

int main()
{
    int arr[] = { 12, 13, 1, 10, 34, 11, 34 };
    int n = sizeof(arr) / sizeof(arr[0]);

    print3largest(arr, n);
    return 0;
}
