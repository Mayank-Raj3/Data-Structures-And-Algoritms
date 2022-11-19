#include <bits/stdc++.h> 
using namespace std; 

struct Node{
    int data;
    Node* next;
    Node(int x){
        data=x;
        next=NULL;
    }
};

Node *insertEnd(Node *head,int x){
    Node *temp=new Node(x);
    if(head==NULL)return temp; //  if null we re returning that only element
    Node *curr=head;
    while(curr->next!=NULL){
        curr=curr->next; // interating till last node so that we can add at last 
    }
    curr->next=temp;
    return head;
    
}

void printlist(Node *head){
        Node *curr=head;
        while(curr!=NULL){
        cout<<curr->data<<" ";
        curr=curr->next;
        }
}
int main() 
{ 
	Node *head=NULL;
	head=insertEnd(head,10);
	head=insertEnd(head,20);
	head=insertEnd(head,30);
	printlist(head);
	return 0;
} 
