#include <iostream>
#include <algorithm>
using namespace std;

int secondLargest(int arr[], int size)
{

    sort(arr, arr + size);

    return arr[size - 2];
}
int main()
{
    int arr[] = {12, 35, 1, 10, 34, 1};
    int size = sizeof(arr) / sizeof(arr[0]);

    cout << "2nd largest element is : " << secondLargest(arr, size);
    return 0;
}