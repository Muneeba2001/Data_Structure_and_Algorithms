#include <iostream>
#include<unordered_set>
using namespace std;
void findCommon(int arr1[], int n1, int arr2[], int n2){
    unordered_set<int>s(arr1, arr1+n1);
    cout<<"Common Element: ";
    for(int i =0; i<n2; i++){
        if(s.find(arr2[i])!= s.end()){
            cout<<arr2[i]<<"  ";
        }
    }
}
int main() {
    int arr1[]={4,6,9,7,3,1,5,2,8};
    int arr2[]= {7,2,3,0,5,6,1,8,4};
    int n1 = sizeof(arr1)/sizeof(arr1[0]);
    int n2 = sizeof(arr2)/sizeof(arr2[0]);
    findCommon(arr1, n1, arr2, n2);
    return 0;
}