#include <iostream>
#include <vector>
#include <unordered_set>
using namespace std;

int repeatingElement(const vector<int>& arr, int n){
    unordered_set<int> seen;
    for(int i=0; i<n; ++i){
        if(seen.find(arr[i]) != seen.end()){
            return arr[i];
        }
        seen.insert(arr[i]);
    }
    return -1;
}
int main() {
    vector<int> arr={1,2,3,3,4,5,6,6,7};
    int n = sizeof(arr)/sizeof(arr[0]);
    int result = repeatingElement(arr, n);
    cout<<"The repeating element is "<< result;
    return 0;
}