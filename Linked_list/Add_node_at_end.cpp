#include<iostream>
using namespace std;

struct Node{
    int data;
    Node *next;

    Node(int val){
        data = val;
        next = nullptr;
    }
};

Node* Node_at_the_end(Node* head, int info){
      Node *current = new Node(info);
      if(head == nullptr){
          return current;
      }
      Node *temp = head;
      while(temp->next != nullptr){
         temp = temp->next;
      }
      temp->next = current;
      return head;
}

int main(){
    Node* head = new Node(10);
    head -> next = new Node(20);
    head -> next -> next = new Node(30);
    head -> next -> next -> next = new Node(40);
    head = Node_at_the_end(head ,50);

    Node *current = head;
    while(current != nullptr){
        cout<<current->data<<"  ";
        current = current->next;
    }
    cout<<endl;
    return 0;
}