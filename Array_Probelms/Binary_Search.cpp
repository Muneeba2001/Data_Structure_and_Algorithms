#include <iostream>
using namespace std;
int main() {
 int arr[]={1,2,3,4,5,6,7,8,9,10};
 int n= sizeof(arr)/ sizeof(arr[0]);
 int location = -1;
 int item = 7;
 int begining=0, ending=n-1;
 while(begining<=ending){
     int mid = (begining+ending)/2;
     if(arr[mid]==item){
     location = mid;
     break;
     }
     else if(item>arr[mid]){
         begining= mid+1;
     }else{
         ending = mid-1;
     }
 }
 cout<<"The item is on index: "<<location;
    return 0;
}