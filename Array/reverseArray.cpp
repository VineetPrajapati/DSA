#include <iostream>
#include <algorithm>

using namespace std;

void reverseArray(int arr[], int start, int end)
{
    int temp;
    while (start < end)
    {
        temp = arr[start];
        arr[start] = arr[end];
        arr[end] = temp;
        start++;
        end--;
    }
}

int main()
{

    // {
    //     int arr[] = {10, 20, 30, 40, 50};
    //     int size = sizeof(arr) / sizeof(arr[0]);

    //     cout << "Array before reverse : ";
    //     for (int i = 0; i < size; i++)
    //     {
    //         cout << arr[i] << " ";
    //     }
    //     cout << endl;

    //     reverseArray(arr, 0, size - 1);

    //     cout << "Array after reverse : ";
    //     for (int i = 0; i < size; i++)
    //     {
    //         cout << arr[i] << " ";
    //     }
    // }

    int arr[] = {10, 20, 30, 40, 50};
    int size = sizeof(arr) / sizeof(arr[0]);

    reverse(arr, arr + size);

    cout << "Reverse array : ";
    for (int i = 0; i < size; i++)
    {
        cout << arr[i] << " ";
    }

    return 0;
}