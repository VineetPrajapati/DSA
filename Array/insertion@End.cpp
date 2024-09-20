#include<iostream>
using namespace std;

int insertEnd(int arr[], int n, int key, int capacity){
    if(n>=capacity){
        return n;
    }

    arr[n] = key;

    return n+1;
}
int main(){
    int arr[20] = { 12, 16, 20, 40, 50, 70 };
    int capacity = sizeof(arr)/sizeof(arr[0]);

    int n = 6;

    cout<<"Before insertion of elem : ";
    for(int i=0; i<n; i++){
        cout<<arr[i]<<" ";
    }

    cout<<endl;

    n = insertEnd(arr, n, 38, capacity);

    cout<<"After insertion of elem : ";
    for(int i = 0; i<n; i++){
        cout<<arr[i]<<" ";
    }

}