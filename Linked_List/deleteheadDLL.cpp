#include<bits/stdc++.h>
using namespace std;

struct Node{
    int data;
    Node *next;
    Node *prev;
    Node(int x){
        data=x;
        next=NULL;
        prev=NULL;
    }
};

// Node *deleteheadDLL(Node *head){
    
//     head->next->prev = NULL;
//     head = head ->next;
//     return head;
// }

Node *deleteLastDLL(Node *head){
    Node *curr=head;
    while(head->next->next!=NULL){
        head=head->next;
    }
    head->next=NULL;
    return curr;
}

void printList(Node *head){
    while(head!=NULL){
        cout<<head->data<<" ";
        head=head->next;
    }
}

int main(){
    Node *head=new Node(10);
	Node *temp1=new Node(20);
	Node *temp2=new Node(30);
    Node *temp3=new Node(40);
	head->next=temp1;
	temp1->prev=head;
	temp1->next=temp2;
	temp2->prev=temp1;
    temp2->next=temp3;
    temp3->prev=temp2;
	// head=deleteheadDLL(head);
    head=deleteLastDLL(head);
	printList(head);
    return 0;
}