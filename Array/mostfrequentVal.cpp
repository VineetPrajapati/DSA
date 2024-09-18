#include <iostream>
#include <algorithm>
using namespace std;

int mostFrequentVal(int arr[], int n)
{

    sort(arr, arr + n);

    int maxCount = 1;
    int curCount = 1;
    int res = arr[0];

    for (int i = 1; i < n; i++)
    {
        if (arr[i] == arr[i - 1])
            curCount++;
        else
            curCount = 1;

        if (curCount > maxCount)
        {

            maxCount = curCount;
            res = arr[i - 1];
        }
    }
    return res;
}

int main()
{

    int arr[] = {4,6,54,3,6,3,5,3,63,5,};

    int size = sizeof(arr) / sizeof(arr[0]);

    cout << "Most frequent value is : " << mostFrequentVal(arr, size);

    return 0;
}