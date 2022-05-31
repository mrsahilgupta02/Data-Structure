#include<bits/stdc++.h>
using namespace std;
struct Node  //making node of type struct
{
    int data;
     Node* next;
    Node(int x)
    {
         data =x;
        next =NULL;
    }
};

Node *insertbegin(Node *head,int x)   //insertbegin is a function of node type 
{
    Node *temp=new Node(x);
    temp->next=head;
    return temp;
}
Node *insertend(Node *head,int x)
{
   Node *temp =new Node(x);
   if(head==NULL)
     return temp;

   Node *curr=head;
   while(curr->next!=NULL)
   {
       curr=curr->next;
   }  
   curr->next=temp;
   return head;
}
Node *insertpos(Node *head,int pos,int data)
{
    Node *temp=new Node(data);

    if(pos==1)
    {
        temp->next=head;
        return temp;
    }
    Node *curr =head;
    for(int i=1;i<pos-1 && curr!=NULL;i++)
    {
        curr=curr->next;
    }
    if(curr==NULL)
      return head;

    temp->next=curr->next;
    curr->next=temp;
    return head;  
}



int main()
{
    Node *head =NULL;
    head=insertbegin(head,10);
    head=insertbegin(head,20);
    insertend(head,30);
    //insertpos(head,3,34);
    while(head)
    {
        cout<<head->data<<" ";
        head=head->next;
    }
    return 0;
}