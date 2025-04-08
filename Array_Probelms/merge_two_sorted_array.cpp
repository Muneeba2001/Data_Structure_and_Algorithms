#include <iostream>
#include <unordered_map>
using namespace std;
void mergeArray(int arr1[], int n1, int arr2[], int n2, int merge[]){
    int i=0, j=0, k=0;
    while(i<n1 && j<n2){
        if(arr1[i]<arr2[j]){
            merge[k++] = arr1[i++];
        } else{
            merge[k++] = arr2[j++];
        }
        while(i< n1){
            merge[k++]= arr1[i++];
        }
        while(j<n2){
            merge[k++]= arr2[j++];
        }
    }
}
void printArray(int arr[], int n){
    for(int i=0; i<n; i++){
        cout<<arr[i]<<"  ";
    }
    cout<<endl;
}
int main() {
    int arr1[]={0,1,2,3,4};
    int arr2[]={5,6,7,8,9};
    int n1 = sizeof(arr1)/ sizeof(arr1[0]);
    int n2 = sizeof(arr2)/ sizeof(arr2[0]);
    int merge[n1+n2];
    cout<<"Array 1: ";
    printArray(arr1, n1);
    cout<<"Array 2: ";
    printArray(arr2, n2);
    cout<<"Merge Array: ";
    mergeArray(arr1, n1, arr2, n2, merge);
    printArray(merge, n1+n2);
    return 0;
}