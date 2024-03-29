#include<bits/stdc++.h>
using namespace std;

struct Node{
    public:
    int data;
    Node *next;
    Node(int x){
        data = x;
        next = NULL;
    }
};

Node* reverse(Node *head){
    Node *curr = head;
    Node *prev = NULL;
    Node *next=curr->next;
    while(curr!=NULL){
        next=curr->next;
        curr->next=prev;
        prev=curr;
        curr=next;
    }
    return prev;
};

void print(Node *head){
    while(head!=NULL){
        cout<<head->data;
        head=head->next ;
    }
}

int main(){
    Node *head = new Node(10);
    head -> next = new Node(20);
    head -> next -> next = new Node(30);
    head -> next -> next -> next = new Node(40);    
    head = reverse(head);
    print(head);
}