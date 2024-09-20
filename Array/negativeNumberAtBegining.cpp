#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;

void move(vector<int> &arr)
{
    sort(arr.begin(), arr.end());
}

void move1(int arr[], int n)
{
    int j = 0;

    for (int i = 0; i < n; i++)
    {
        if (arr[i] < 0)
        {
            swap(arr[i], arr[j]);
            j++;
        }
    }
}
int main()
{

    {
        int arr[] = {-1, 2, -3, 4, 5, 6, -7, 8, 9};
        int size = sizeof(arr) / sizeof(arr[0]);

        move1(arr, size);
        for (int i = 0; i < size; i++)
        {
            cout << arr[i] << " ";
        }
    }

    // {vector<int> arr = {-12, 11, -13, -5, 6, -7, 5, -3, -6};
    // move(arr);
    // for (int i = 0; i < arr.size(); i++)
    // {
    //     cout << arr[i] << " ";
    // }}
}