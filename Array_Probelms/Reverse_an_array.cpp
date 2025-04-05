#include <iostream>
using namespace std;
int main() {
    int arr[]={4,5,7,2,8,3,9};
    int n = sizeof(arr)/ sizeof(arr[0]);
    for(int i=n-1; i>=0; i--){
        cout<<arr[i]<<" ";
    }
    cout<<endl;
    return 0;
}