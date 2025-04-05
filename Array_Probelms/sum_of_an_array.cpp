#include <iostream>
using namespace std;
int main() {
    int arr[]={4,5,7,2,8,3,9};
    int n = sizeof(arr)/ sizeof(arr[0]);
    int sum=0;
    for(int i=0; i<n; i++){
        sum += arr[i];
    }
    cout<<"The sum of an array is "<<sum;
    return 0;
}