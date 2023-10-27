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

// Node* reverse(Node *head){
//     Node *temp= head;
//     Node *list;
//     if(temp->next->next != NULL)
//     return temp->next;
//     temp = temp->next;
//     list -> next = reverse(temp);
//     list = list->next;
// };

int position(Node *head, int x){
    Node *temp = head;
    int count = 1;
    while(temp != NULL){
        if(temp->data == x)
        return count;
        count++;
        temp = temp->next;
    }
    return -1;
}
int main(){
    Node *head = new Node(10);
    head -> next = new Node(20);
    head -> next -> next = new Node(30);
    head -> next -> next -> next = new Node(40);    
    int pos = position(head, 30);
    cout<<pos;
}