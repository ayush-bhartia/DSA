#include<bits/stdc++.h>
using namespace std;

struct Node{
    int data;
    Node *next;
    Node(int x){
        data =x;
        next = NULL;
    }
};
void insertAtpos(Node *head,int pos, int data){
    Node *temp = new Node(data);
    Node *ptr = head;
    int cnt=1;
    while(cnt<=pos-2){
        ptr = ptr->next;  
        cnt++;
    }
    temp->next = ptr->next;
    ptr->next = temp;
}
void printList(Node *head){
    Node *temp = head;
    while(temp != NULL){
        cout<< temp->data << " ";
        temp = temp->next;
    }
}
int main(){
     Node *head = new Node(10);
     head->next = new Node(20);
     head->next->next = new Node(30);
     head->next->next->next = new Node(40);
     insertAtpos(head,3,50);
     printList(head);
}