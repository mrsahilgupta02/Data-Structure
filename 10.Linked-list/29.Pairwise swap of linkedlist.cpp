#include<bits/stdc++.h>
using namespace std;
struct Node
{
    int data;
    Node*next;
    Node(int d)
    {
        data=d;
        next=NULL;
    }
};
void printlist(Node *head){
    Node *curr=head;
    while(curr!=NULL){
        cout<<curr->data<<" ";
        curr=curr->next;
    }cout<<endl;
}


void pairwiseswap(Node *head)  //we are traversing  in the ll and swapping datas of every continous 2 elements 
{
    Node *curr=head;
    while(curr!=NULL&&curr->next!=NULL)
    {
        swap(curr->data,curr->next->data);
        curr=curr->next->next;
    }
}
int main() 
{ 
	Node *head=new Node(1);
	head->next=new Node(2);
	head->next->next=new Node(3);
	head->next->next->next=new Node(4);
	head->next->next->next->next=new Node(5);
	printlist(head);
	pairwiseswap(head);
	printlist(head);
	return 0;
} 


