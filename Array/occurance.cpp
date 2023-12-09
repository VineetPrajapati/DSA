#include<bits/stdc++.h>
using namespace std;

int firstOcc(int arr[], int n, int k){
    int s = 0;
    int e = n-1;
    int mid = s + (e-s)/2;
    int ans = -1;

    while(s<=e){
        if(arr[mid] == k){
            ans = mid;
            e = mid-1;
        }
        else if(k>arr[mid]){
            s = mid + 1;
        }
        else if(k<arr[mid]){
            e = mid -1;
        }

        mid = s + (e-s)/2;
    }

    return ans;
}

int lastOcc(int arr[], int n, int k){
    int s = 0;
    int e = n-1;
    int mid = s + (e-s)/2;
    int ans = -1;

    while(s<=e){
        if(arr[mid] == k){
            ans = mid;
            s = mid+1;
        }
        else if(k>arr[mid]){
            s = mid + 1;
        }
        else if(k<arr[mid]){
            e = mid -1;
        }

        mid = s + (e-s)/2;
    }

    return ans;
}




int main(){
    int num[9] = { 1,2,3,3,3,3,3,3,5};
    cout<<"First occurance is "<<firstOcc(num, 9, 3)<<endl;
    cout<<"Last occurance id "<<lastOcc(num, 9, 3)<<endl;

    int totalOcc = (lastOcc(num , 9, 3) - firstOcc(num, 9, 3) + 1);
    cout<<"Total Occurance is "<<totalOcc<<endl;
    return 0;
}