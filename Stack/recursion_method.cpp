// Online C++ compiler to run C++ program online
#include <iostream>
#include<vector>
using namespace std;

void removeElement(vector<int>& stack, int target){
    if(stack.empty()) return;
    int top = stack.back();
    stack.pop_back();
    removeElement(stack, target);
    if(top!=target){
        stack.push_back(top);
    }
}
void pushElement(vector<int>& stack, int Element){
    stack.push_back(Element);
}
void printStack(const vector<int>& stack){
    cout<<"Stack(bottom to top): ";
    for(int val: stack){
        cout<<val<<" ";
    }
    cout<<endl;
}

int main() {
    vector<int> stack={1,2,3,4,5};
    cout<<"Origional stack: \n";
    printStack(stack);
    int elementToRemove = 3;
    int newElement = 9;
    removeElement(stack, elementToRemove);
    pushElement(stack, newElement);
    cout<<"\n After removing "<<elementToRemove<<" and pushing "<<newElement<<":\n";
    printStack(stack);
    return 0;
}