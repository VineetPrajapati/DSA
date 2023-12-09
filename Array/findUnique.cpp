#include <bits/stdc++.h>
using namespace std;

int findUnique(int arr[], int size)
{
    int ans = 0;

    for (int i = 0; i < size; i++)
    {
         ans = ans ^ arr[i];
    }
    return ans;
}
int main()
{
    int arr[11] = {1,1,2,2,3,3,4,4,9,5,5};
    cout<< findUnique(arr, 11);

    return 0;
}
