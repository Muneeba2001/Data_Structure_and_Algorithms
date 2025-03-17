#include<iostream>
using namespace std;

struct Node
{
    int data;
    Node *next;

    Node(int val){
        data = val;
        next = nullptr;
    }
};

Node* Node_at_the_start(Node *head, int info){
    Node* current = new Node(info);
    current->next = head;
    return current;
}

int main(){
    Node *head = new Node(20);
    head -> next = new Node(30);
    head -> next -> next = new Node(40);
    head = Node_at_the_start(head, 10);
    
    Node *temp = head;
    while(temp != nullptr){
        cout<<temp->data<<"  ";
        temp = temp->next;
    }
    cout<<endl;
    return 0;
}
