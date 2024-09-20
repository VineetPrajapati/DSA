#include <iostream>
#include<vector>
#include <algorithm>
using namespace std;

void sort(vector<int> &arr)
{
    sort(arr.begin(), arr.end());
}

// ***********Sort an array of 0s, 1s and 2s***********

void sort012(int arr[], int n)
{
    int count0 = 0, count1 = 0, count2 = 0;

    for (int i = 0; i < n; i++)
    {
        if (arr[i] == 0)
        {
            count0++;
        }
        else if (arr[i] == 1)
        {
            count1++;
        }
        else
        {
            count2++;
        }
    }

    int index = 0;
    for (int i = 0; i < count0; i++)
    {
        arr[index++] = 0;
    }
    for (int i = 0; i < count1; i++)
    {
        arr[index++] = 1;
    }
    for (int i = 0; i < count2; i++)
    {
        arr[index++] = 2;
    }
}

void selectionSort(int arr[], int n)
{

    for (int i = 0; i < n - 1; i++)
    {

        int minIndex = i;

        for (int j = i + 1; j < n; j++)
        {
            if (arr[j] < arr[minIndex])
            {
                minIndex = j;
            }
        }

        swap(arr[i], arr[minIndex]);
    }
}

void bubbleSort(int arr[], int n)
{
    for (int i = 0; i < n - 1; i++)
    {
        for (int j = 0; j < n - i - 1; j++)
        {
            if (arr[j] > arr[j + 1])
            {
                swap(arr[j], arr[j + 1]);
            }
        }
    }
}
int main()
{
    // **********By Built-in sort()**********
    // {
    //     int arr[] = {38, 18, 12, 6, 29, 20, 5, 7};
    //     int n = sizeof(arr) / sizeof(arr[0]);

    //     sort(arr, arr + n);

    //     for (int i = 0; i < n; i++)
    //     {
    //         cout << arr[i] << " ";
    //     }
    // }

    // ***********Sort an array of 0s, 1s and 2s***********
    // {
    //     int arr[] = {0, 1, 1, 0, 1, 2, 1, 2, 0, 0, 0, 1, 2};
    //     int n = sizeof(arr) / sizeof(arr[0]);

    //     sort012(arr, n);

    //     for (int i = 0; i < n; i++)
    //     {
    //         cout << arr[i] << " ";
    //     }
    // }

    // ***********Selection Sort***********
    // {
    //     int arr[] = {29, 72, 98, 13, 83, 66, 32, 52, 36};

    //     int size = sizeof(arr) / sizeof(arr[0]);

    //     selectionSort(arr, size);

    //     for (int i = 0; i < size; i++)
    //     {
    //         cout << arr[i] << " ";
    //     }
    // }

    // ***********Bubble Sort***********

    // {

    //     int arr[] = {10, 1, 7, 6, 14, 9};
    //     int size = sizeof(arr) / sizeof(arr[0]);

    //     bubbleSort(arr, size);

    //     for (int i = 0; i < size; i++)
    //     {
    //         cout << arr[i] << " ";
    //     }
    // }

    return 0;
}