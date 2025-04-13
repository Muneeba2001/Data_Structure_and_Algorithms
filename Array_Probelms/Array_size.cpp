#include <iostream>
using namespace std;

bool arraySize(int arr1[], int n1, int arr2[], int n2){
    if(n1 == n2){
        cout<<"Array size same";
    }
    else{
        cout<<"size is not same";
    }
    return 0;
}

int main() {
    int arr1[]={1,2,3,3,4,5,6,6,7};
    int n1 = sizeof(arr1)/sizeof(arr1[0]);
    int arr2[]={1,2,3,3,4,5,6,6,7};
    int n2 = sizeof(arr2)/sizeof(arr2[0]);
    arraySize(arr1, n1, arr2, n2);
    return 0;
}