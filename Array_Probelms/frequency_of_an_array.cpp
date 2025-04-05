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
    cout<<"Element | Frequency "<<endl;
    for(auto pair : freqMap){
        cout<< " "<< pair.first << "          " << pair.second<< endl;
    }
    return 0;
}