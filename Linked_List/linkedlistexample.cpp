#include<bits/stdc++.h>
using namespace std;

struct Node{
    int data;
    Node *next;
    Node(int x){   //constructor
        data = x;
        next = NULL;
    }
};
void printNode(Node *head){
    Node *temp = head;
    while(temp!=NULL){
        cout<<temp->data<<" "<<endl;
        temp=temp->next;
    }
}
int main(){
    Node *head= new Node(10);
    head->next = new Node(20);
    head->next->next= new Node(30);
    cout<<head->data<<" "<<head->next->data<<" "<<head->next->next->data<<endl;
    printNode(head);
}