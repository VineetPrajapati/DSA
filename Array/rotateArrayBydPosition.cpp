#include <iostream>
#include <vector>
using namespace std;

void roateArray(vector<int> &arr, int d)
{
    int n = arr.size();

    d = d % n;

    vector<int> temp(n);

    int k = 0;

    for (int i = d; i < n; i++)
    {
        temp[k] = arr[i];
        k++;
    }

    for (int i = 0; i < d; i++)
    {
        temp[k] = arr[i];
        k++;
    }

    for (int i = 0; i < n; i++)
    {
        arr[i] = temp[i];
    }
}

void rotateOneByOne(vector<int> &arr, int d)
{
    int size = arr.size();

    for (int i = 0; i < d; i++)
    {

        int first = arr[0];

        for (int j = 0; j < size - 1; j++)
        {
            arr[j] = arr[j + 1];
        }

        arr[size - 1] = first;
    }
}
int main()
{

    vector<int> arr = {1, 2, 3, 4, 5, 6};

    rotateOneByOne(arr, 3);

    for (int val : arr)
    {
        cout << val << " ";
    }

    // {vector<int> arr = {1, 2, 3, 4, 5, 6, 7};

    // int d = 2;

    // cout<<"Initial Array is : ";
    // for (int i = 0; i < arr.size(); i++){
    //     cout<<arr[i]<<" ";
    // }

    // roateArray(arr, d);

    // cout << "\n Rotated array will be : ";

    // for (int i = 0; i < arr.size(); i++)
    // {
    //     cout << arr[i] << " ";
    // }

    // return 0;}
}