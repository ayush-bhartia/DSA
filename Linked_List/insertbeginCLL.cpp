#include<bits/stdc++.h>
using namespace std;

struct Node{
    int data;
    Node *next;
    Node(int x){
        data=x;
        next=NULL;
    }
};

Node *insertbeginCLL(Node *head,int data){
    Node *neww= new Node(data);
    if(head==NULL)
    head->next=head;
    Node *ptr=head;
    while(ptr->next!=head){
        ptr=ptr->next;
    }
    neww->next=head;
    ptr->next=neww;
    return head;
}

void printList(Node *list){
    Node *ptr=list;
    while(ptr->next!=list){
        cout<<ptr->data<<" ";
        ptr=ptr->next;
    }
}

int main(){                                                   //One another way of doing this is insert a node of new data just after
    Node *list;                                               //the first node and swap the data of both the first node and newly inserted node.
    Node *head=new Node(10);
    Node *temp1=new Node(20);
    Node *temp2=new Node(30);
    Node *temp3=new Node(40);
    head->next=temp1;
    temp1->next=temp2;
    temp2->next=temp3;
    temp3->next=head;                                  
    list=insertbeginCLL(head,20);
    printList(list);
}