#include <bits/stdc++.h>
using namespace std;

int binarySearch(int arr[], int size, int key){
    int s = 0;
    int e = size-1;
    int mid = (s+e)/2;

    while(s<=e){
        if(arr[mid]==key){
            return mid;
        }
        else if(key>arr[mid]){
            s=mid+1;
        }
        else{
            e=mid-1;
        }
        mid = (s+e)/2;
    }

    return -1;
}
int main()
{
    int arr1[8] = {2, 6, 8, 14, 16, 20, 25, 30};
    int arr2[5] = {3, 6, 8, 11, 19};

    int index = binarySearch(arr1,8,6);
    cout<<"Index of 6 is "<<index<<endl;
    return 0;
}