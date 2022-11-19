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

void printlist(Node *head){
    Node *curr=head;
    while(curr!=NULL){
        cout<<curr->data<<" ";
        curr=curr->next;
    }
}

int main() 
{ 
// we can declare like following way also 
  //Node *head=new Node(10);
	//Node *temp1=new Node(20);
	//Node *temp2=new Node(30);
	//head->next=temp1;
	//temp1->next=temp2;
  
	Node *head=new Node(10);
	head->next=new Node(20);
	head->next->next=new Node(30);
	head->next->next->next=new Node(40);
	printlist(head);
	return 0;
} 
