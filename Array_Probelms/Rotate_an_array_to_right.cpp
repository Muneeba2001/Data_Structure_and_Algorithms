#include <iostream>
#include <unordered_map>
using namespace std;
void rotateArray(int arr[], int n){
    if(n<=1) return;
    int last = arr[n-1];
    for(int i=n-1; i>0; i--){
        arr[i]= arr[i-1];
    }
    arr[0] = last;
}
void printArray(int arr[], int n){
    for(int i=0; i<n; i++){
        cout<<arr[i]<<"  ";
    }
    cout<<endl;
}
int main() {
    int arr[]={1,2,3,4,5,6,7,8,9,0};
    int n = sizeof(arr)/ sizeof(arr[0]);
    printArray(arr, n);
    rotateArray(arr, n);
    printArray(arr, n);
    return 0;
}