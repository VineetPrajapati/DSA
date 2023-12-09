#include <bits/stdc++.h>
using namespace std;

int sortArray(int arr[], int size)
{
    int l = 0;
    int r = size - 1;
    while (l < r)
    {
        while (arr[l] == 0 && l < r)
        {
            l++;
        }
        while (arr[r] == 1 && l < r)
        {
            r--;
        }

        if (arr[l] == 1 && arr[r] == 0 && l < r)
        {
            swap(arr[l], arr[r]);
            l++;
            r--;
        }
    }
}

int printArray(int arr[], int size)
{
    for (int i = 0; i < size; i++)
    {
        cout << arr[i] << " ";
    }
}
int main()
{
    int arr[10] = {1, 1, 1, 0, 0, 0, 1, 0, 0, 1};
    sortArray(arr, 10);
    printArray(arr, 10);

    return 0;
}
