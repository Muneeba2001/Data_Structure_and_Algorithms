// Online C++ compiler to run C++ program online
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
Node* delete_the_first_node(Node *head, int info){
    Node *current = new Node(info);
    if(head == nullptr){
        cout<<"list empty";
    }else{
        current = head;
        head = head->next;
        free(current);
    }
    return head;
}

int main() {
     Node *head = new Node(10);
     head-> next= new Node(20);
     head -> next -> next = new Node(30);
     head -> next -> next -> next = new Node(40);

     cout << "Original List: ";
     Node *temp = head;
     while (temp != nullptr)
     {
         cout << temp->data << " ";
         temp = temp->next;
     }
     cout << endl;

     head= delete_the_first_node(head, 10);
     temp = head;
     while(temp!=nullptr){
         cout<<temp->data<< "  ";
         temp = temp->next;
     }
     cout<<endl;
    return 0;
}