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
    void pop(){
        if(arr.empty()){
            cout<<"Stack underflow";
        } 
        else{
            int popped = arr.back();
            arr.pop_back();
            cout<<"Element Popped: "<<popped<<endl;
        }
    }
    bool isEmpty(){
        return arr.empty();
    }
    void display(){
        if(arr.empty()){
            cout<<"Stack underflow";
        } 
        else{
        cout<<"Stack Element: ";
        }
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
    s.pop();
    s.display();
    s.pop();
    s.display();
    s.pop();
    s.display();
    
    return 0;
}