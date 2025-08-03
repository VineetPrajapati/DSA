// MinMax
#include <iostream>
#include <vector>
#include <algorithm>
#include <limits>

using namespace std;

struct MinMax
{
    int min;
    int max;
};

MinMax findMinMax(const vector<int> &arr)
{
    MinMax result;

    if (arr.empty())
    {
        result.min = -1;
        result.max = -1;
        cout << "Array is empty : " << endl;
        return result;
    }

    result.min = arr[0];
    result.max = arr[0];

    for (int i = 1; i < arr.size(); ++i)
    {
        if (arr[i] > result.max)
        {
            result.max = arr[i];
        }

        if (arr[i] < result.min)
        {
            result.min = arr[i];
        }
    }

    return result;
}

int main()
{
    vector<int> arr1 = {4, 6, 3, 25, 25, 76};
    MinMax mn1 = findMinMax(arr1);

    cout << "Array : ";
    for (int x : arr1)
        cout << x << " ";
    cout << endl;
    cout << "Max : " << mn1.max << ", Min : " << mn1.min;

    cout << endl;

    vector<int> arr2 = {};
    MinMax mn2 = findMinMax(arr2);
    cout << "Array2 : ";
    for (int x : arr2)
        cout << x << " ";
    cout << endl;
    cout << "Max : " << mn2.max << ", Min : " << mn2.min;
    cout << endl;

    vector<int> arr3 = {15};
    MinMax mn3 = findMinMax(arr3);

    cout << "Array : ";
    for (int x : arr3)
        cout << x << " ";
    cout << endl;

    cout << "Max : " << mn3.max << ", Min : " << mn3.min;

    cout<<endl;
}
