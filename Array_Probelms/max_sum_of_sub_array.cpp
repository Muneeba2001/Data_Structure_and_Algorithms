#include <iostream>
#include<climits>
using namespace std;
int main() {
  int arr[]={1,2,3,4,5,6,7,8};
  int n = sizeof(arr)/sizeof(arr[0]);
  int w=4;
  int maxx = INT_MIN;
  for(int i=0; i<n-w; i++){
      int current = 0;
      for(int j=1; j<i+w; j++){
          current += arr[j];
          maxx = max(current, maxx);
      }
  }
  cout<<"The maximun sum of sub array: "<<maxx<<endl;
    return 0;
}