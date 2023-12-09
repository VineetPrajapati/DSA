#include<iostream>
using namespace std;

void reverse(int arr[], int n){
    int start = 0;
    int end = n-1;

    while(start<=end){
        swap(arr[start], arr[end]);
        start++;
        end--;
    }
}

void printArray(int arr[], int n){
    for(int i=0; i<10; i++){
        cout<<arr[i]<<" ";
    }
}
int main(){
    int arr[10] = {1,2,3,4,5,6,7,8,9,10};

    cout<<"Initial Array is ";
    printArray(arr, 10);
    cout<<endl;
    
    reverse(arr, 10);
    cout<<"Reversed Array is ";
    printArray(arr, 10);
}