#include <iostream>
using namespace std;
bool isSorted(int arr[],int n){
    for(int i=1; i<n; i++){
        if(arr[i]<arr[i-1]){
            return false;
        }
    }
    return true;
}
int main() {
    // int arr[]={4,6,9,7,3,1,5,2,8};
    int n;
    cout<<"Enter number of element: ";
    cin>>n;
    int arr[n];
    cout<<"The elements of array: ";
    for(int i=0; i<n; i++){
        cin>>arr[i];
    }
    if(isSorted(arr, n)){
        cout<<"Array is sorted!";
    }
    else{
        cout<<"Array is not sorted!";
    }

    return 0;
}