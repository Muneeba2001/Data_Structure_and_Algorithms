#include<iostream>
#include<vector>
using namespace std;
class Stack{
    private:
    vector<int>arr;
    public:
    void push(int val){
        arr.push_back(val);
    }
    bool isEmpty(){
        return arr.empty();
    }
    void display(){
        cout<<"Stack Element: ";
        for(int val: arr){
            cout<<val<<" ";
        }
        cout<<endl;
    }
};
int main(){
    Stack s;
    s.push(10);
    s.push(20);
    s.push(30);
    s.display();
    return 0;
}