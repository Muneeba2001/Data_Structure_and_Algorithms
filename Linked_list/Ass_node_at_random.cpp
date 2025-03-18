#include <iostream>
using namespace std;
struct Node{
    int data;
    Node *next;
    Node(int val){
        data = val;
        next = nullptr;
    }
};
Node* add_the_middle(Node *head, int info, int x){
    Node *current = new Node(info);
    Node* ptr = head;
    while(ptr->data!= x && ptr != nullptr){
        ptr= ptr->next;
    }
    if(ptr->data == x){
        current->next = ptr->next;
        ptr->next = current;
    }
    return head;
}

int main() {
     Node *head = new Node(10);
     head-> next= new Node(20);
     head -> next -> next = new Node(30);
     head -> next -> next -> next = new Node(50);
     head= add_the_middle(head, 40, 30);
     Node *temp = head;
     while(temp!=nullptr){
         cout<<temp->data<< "  ";
         temp = temp->next;
     }
     cout<<endl;
    return 0;
}