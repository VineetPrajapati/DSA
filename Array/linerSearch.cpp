#include<bits/stdc++.h>
using namespace std;

bool Search(int arr[], int size, int key){

    for(int i=0; i<=size; i++){
        if(arr[i]==key){
            return 1;
        }
    }

    return 0;

}
int main(){

    int arr[10] = {1,6,8,9,26,96,34,0,14,2};

    int key;
    cout<<"Enter key value to search : ";
    cin>>key;

    int found = Search(arr, 10, key);

    if(found){
        cout<<"Key is present!"<<endl;
    }
    else{
        cout<<"Key not found!"<<endl;
    }


    return 0;
}