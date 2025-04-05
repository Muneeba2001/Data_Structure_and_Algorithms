#include <iostream>
using namespace std;
int main() {
    int arr[]={4,5,7,2,8,3,9};
    int n = sizeof(arr)/ sizeof(arr[0]);
    int min=arr[0];
    for(int i=1; i<n; i++){
        if(arr[i]<min){
          min = arr[i];
        }
        
    }
    cout<<"The smallest number is "<<min;
    return 0;
}