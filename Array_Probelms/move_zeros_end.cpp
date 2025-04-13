#include <iostream>
using namespace std;

int moveZeroToEnd(int arr[], int n){
    int element = 0;
    for(int i=0; i<n; i++){
        if(arr[i]!=0){
            arr[element++]= arr[i];
        }
    }
    while(element<n){
        arr[element++]=0;
    }
    return 0;
}

int main() {
    int arr[]={0,1,2,0,3,0,4,5,0,6,7};
    int n = sizeof(arr)/sizeof(arr[0]);
    moveZeroToEnd(arr, n);
    for(int i=0;i<n;i++){
        cout<<arr[i]<<"  ";
    }
    cout<<endl;
    return 0;
}