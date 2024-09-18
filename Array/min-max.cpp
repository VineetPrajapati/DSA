// method 1 by using the built in sort method

#include<iostream>
#include<algorithm>

using namespace std;

int main(){
    int a[] = { 1, 423, 6, 46, 34, 23, 13, 53, 4 };

    int n = sizeof(a) / sizeof(a[0]);

    sort(a, a+n);  //inbuilt algorithm for sorting

    cout<<"Min : "<<a[0]<<endl<<"Max : "<<a[n-1];

    return 0;
}

// -------------------------------------------------------

// method 2 using min and max function

#include <bits/stdc++.h>
using namespace std;

int getMin(int arr[], int n)
{
    int res = arr[0];
    for (int i = 1; i < n; i++)
    {
        res = min(res, arr[i]);
    }
    return res;
}

int getMax(int arr[], int n)
{
    int res = arr[0];
    for (int i = 1; i < n; i++)
    {
        res = max(res, arr[i]);
    }
    return res;
}

int main()
{
    int arr[] = {12, 1234, 45, 67, 11,8745, 67, 1, 56, 5, 9, 16};
    int n = sizeof(arr) / sizeof(arr[0]);

    cout << "Min val : " << getMin(arr, n) << endl;
    cout << "Max val : " << getMax(arr, n);

    return 0;
}
