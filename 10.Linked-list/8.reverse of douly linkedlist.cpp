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

Node *reversedll(Node *head)
{
    if(head==NULL || head->next==NULL)return head;

    Node*prev=NULL;
    Node*curr=head;
    while(curr!=NULL)//swapping
    {
        prev=curr->prev;
        curr->prev=curr->next;
        curr->next=prev;
        curr=curr->prev;
    }
    
    return prev->prev;   //we have done this beccacuse we want the last element to became head 
}
int main()
{
     Node *head=new Node(10);
    Node *temp1=new Node(20);
    Node *temp2=new Node(30);
    head->next=temp1;
    temp1->prev=head;
    temp1->next=temp2;
    temp2->prev=temp1;
    head = reversedll(head);    //we have to make new head so we have to do this here  
    Node *curr=head;
    while(curr!=NULL)
     {
         cout<<(curr->data)<<" ";
         curr=curr->next;
     }
    
}