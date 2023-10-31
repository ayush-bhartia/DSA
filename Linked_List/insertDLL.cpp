#include<bits/stdc++.h>
using namespace std;

struct Node{
    int data;
    Node *next;
    Node *prev;
    Node(int x){
        data = x;
        next = NULL;
        prev = NULL;
    }
};

// Node *insertDLLatpos(Node* head, int data, int pos){
//     int posCount=1;
//     Node *temp = new Node(data);
//     Node *ptr= head;
//     Node *list=head;
//     while(posCount<=pos-2){
//         ptr= ptr->next;
//         posCount++;
//     }
//     temp->next=ptr->next;
//     ptr->next->prev=temp;
//     temp->prev=ptr;
//     ptr->next=temp;
//     return list;
// }
// Node *insertatEndDLL(Node *head, int data){
//     Node *temp = new Node(data);
//     Node *ptr= head;
//     Node *list=head;
//     while(ptr->next != NULL){
//         ptr = ptr->next;
//     }
//     ptr->next= temp;
//     temp->prev = ptr;
//     return list;
// }
Node *reverseDLL(Node *head){
    Node *ptr;
    while(head->next !=NULL){
        head=head->next;
    }
    ptr=head;
while (ptr!=NULL)
{
    ptr->next = ptr->prev;    
    ptr->prev = ptr->next;
    ptr = ptr->next;
}
return head;
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
	head=reverseDLL(head);
	printList(head);
    return 0;
};  