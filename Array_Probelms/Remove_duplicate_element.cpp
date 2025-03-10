#include <iostream>
using namespace std;
int main() {
 int arr[]={1,2,2,3,3,4,4,5,5};
 int n= sizeof(arr)/ sizeof(arr[0]);
 int x = 0;
 for(int i=1; i<n; i++){
    if(arr[i]!=arr[x]){
        x++;
        arr[x]= arr[i];
    }
        
 }
 cout<<"New Array: ";
 for(int i=0; i<=x; i++){
     cout<<arr[i]<<"  ";
 }
    return 0;
}