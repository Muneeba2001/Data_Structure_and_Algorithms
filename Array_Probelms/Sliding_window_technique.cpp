#include <iostream>
#include<climits>
using namespace std;
int main() {
 int arr[]={1,2,3,4,5,6,7,8,9};
 int n= sizeof(arr)/ sizeof(arr[0]);
 int w=4;
 int current = 0;
 for(int i=0; i<w; i++){
     current += arr[i];
 }
 int maxx = current;
 for(int j=1; j<=n-w; j++){
     current = current-arr[j-1]+arr[j+w-1];
     if(current>maxx){
         maxx = current;
     }
 }
    cout<<"The max sub array: "<<maxx;
    return 0;
}