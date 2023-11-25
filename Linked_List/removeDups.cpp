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

Node* removeDups(Node *head){
    Node *curr=head;
    while(curr!=NULL && curr->next!=NULL){
        if(curr->data==curr->next->data){
            Node *temp= curr->next;
            curr->next=curr->next->next;
            delete(temp);
        }
        else{
            curr=curr->next;
        }
    }
    return head;
}

void print(Node *head){
    while(head!=NULL){
        cout<<head->data;
        head=head->next ;
    }
}

int main(){
    Node *head = new Node(10);
    head -> next = new Node(20);
    head -> next -> next = new Node(20);
    head -> next -> next -> next = new Node(40);    
    head = removeDups(head);
    print(head);
}