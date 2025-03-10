#include <iostream>
using namespace std;
int main() {
    int arr[]={25,16,38,10,35,48,20,50};
    int max1, max2;
    if(arr[0]>arr[1]){
        max1 = arr[0];
        max2 = arr[1];
    }
    else {
        max1 = arr[1];
        max2 = arr[0];
    }
    for(int i=0; i<8; i++){
        if(arr[i]>max1){
            max2 = max1;
            max1 = arr[i];
        }
        else if(arr[i]>max2){
            max2 = arr[i];
        }
    }
    cout<<"Second largest number: "<<max2;

    return 0;
}