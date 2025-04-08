#include <iostream>
#include <unordered_map>
using namespace std;
int main() {
    int arr[]={14,15,14,14,15,13,13,18,18,18};
    int n = sizeof(arr)/ sizeof(arr[0]);
    
    unordered_map<int, int> freqMap;
    for(int i=0; i<n; i++){
       freqMap[arr[i]]++;
    }
    int searchElement;
    cout<<"The Element you want to search: ";
    cin>>searchElement;
    if(freqMap.find(searchElement)!= freqMap.end()){
        cout<<"Ocuurance of element "<<searchElement<<" is "<<freqMap[searchElement]<<endl;
    }
    else{
        cout<<"No element found!";
    }
    return 0;
}