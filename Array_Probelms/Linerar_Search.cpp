#include <iostream>
using namespace std;
int main() {
 int arr[]={1,2,3,4,5};
 int n= sizeof(arr)/ sizeof(arr[0]);
 int location = -1;
 int item = 3;
 int i=0;
 while(i<=n && arr[i]!= item){
     i++;
 }
 if(arr[i]==item){
     location = arr[i];
     cout<<"The item is on index: "<<location;
 }
    return 0;
}