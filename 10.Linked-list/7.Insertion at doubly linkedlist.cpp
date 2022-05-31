#include<bits/stdc++.h>
using namespace std;
struct Node
{
   int data;
   Node*prev;
   Node*next;
   Node(int d)
   {
       data=d;
       prev=NULL;
       next=NULL;
   }
}; 

Node *insertbegin(Node*head,int data)
{
    Node *temp=new Node(data);
    temp->next=head;
    if(head!=NULL)
    {
        head->prev=temp;
    }
    return temp;
}
Node *insertend(Node *head,int data)
{
    Node*temp=new Node(data);
    if(head==NULL)
    return temp;
    Node*curr=head;
    while(curr->next!=NULL)
    {
        curr=curr->next;
    }
    curr->next=temp;
    temp->prev=curr;
    return head;
}
int main()
{
    Node *head =NULL;
    head=insertbegin(head,10);
    head=insertbegin(head,20);
    insertend(head,30);
     while(head!=NULL)
    {
        cout<<(head->data)<<" ";
        head=head->next;
        
    }
}