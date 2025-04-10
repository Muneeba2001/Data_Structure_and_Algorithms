// Online C++ compiler to run C++ program online
#include <iostream>
using namespace std;
int missingNumber(int arr[], int n){
    int total = (n*(n+1))/2;
    int sum = 0;
    for(int i=0; i<n-1; i++){
        sum += arr[i];
    }
    return total-sum;
}
int main() {
   int arr[]={1,2,4,5,6};
   int n = sizeof(arr)/sizeof(arr[0]);
   int missing = missingNumber(arr, n);
   cout<<missing;
    return 0;
}