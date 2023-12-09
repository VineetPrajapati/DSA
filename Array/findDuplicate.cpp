#include<bits/stdc++.h>
using namespace std;
int findDuplicate(int arr[], int size){
    int ans = 0;
    for(int i=0; i<size; i++){
        ans = ans ^ arr[i];
    }
    for(int i = 1; i<size; i++){
        ans = ans^i;
    }

    return ans;
}
int main()
{
    int arr[7]={6,3,1,5,4,3,2};
    int result = findDuplicate(arr, 7);
    cout<<result;
    return 0;
}