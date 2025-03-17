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

void Node_at_the_start(Node *head, int info){
    Node *current= head;
    current = new Node(info);
    new -> next = head;
    head = new;
    return head;
}

int main(){
    Node *head = new Node(20);
    head -> next = new Node(30);
    heade -> next -> next = new Node(40);
    Node_at_the_start(head, 10);
}
