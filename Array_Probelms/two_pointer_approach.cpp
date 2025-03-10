#include <iostream>
using namespace std;
void sumOftarget(int arr[], int n, int target){
    int left = 0;
    int right = n-1;
    while(left<right){
        int sum = arr[left]+arr[right];
        if(sum == target){
            cout<<"Pair of target: "<<arr[left]<<" and "<<arr[right];
            return;
        }
        else if(sum<target){
            left++;
        }
        else{
            right--;
        }
    }
    cout<<"No pair found";
}
int main() {
  int arr[]={1,2,3,4,5,6,7,8};
  int n = sizeof(arr)/sizeof(arr[0]);
  int target = 10;
  sumOftarget(arr, n, target);
    return 0;
}