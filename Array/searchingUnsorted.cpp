#include <iostream>
using namespace std;

int searchingUnsortedArray(int arr[], int n, int key)
{
    for (int i = 0; i < n; i++)
    {
        if (arr[i] == key)
        {
            return i+1;
        }
    }
    return -1;
}

int main()
{
    int arr[] = {12, 34, 10, 6, 40};
    int size = sizeof(arr) / sizeof(arr[0]);

    cout << "Index of 10 is : " << searchingUnsortedArray(arr, size, 10) << endl;
    cout << "Index of 6 is : " << searchingUnsortedArray(arr, size, 6) << endl;
    cout << "Index of 40 is : " << searchingUnsortedArray(arr, size, 40) << endl;
}