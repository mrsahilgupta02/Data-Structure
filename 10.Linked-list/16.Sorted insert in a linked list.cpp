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
Node*sortedinsert(Node*head,int x)
{
     Node*temp=new Node(x);
     if(head==NULL)
     return temp;
     
     if(x<head->data)
     {
         temp->next=head;
         return temp;
     }
     Node *curr=head;
     while(curr->next!=NULL && curr->next->data<x)   //here we traverse curr from start to the pos of just smaller value than x
     {
         curr=curr->next;
     }
     temp->next=curr->next;          //we connect temp to cuur->next and than curr to temp
     curr->next=temp;
     return head;
}

void printlist(Node*head)
{
    Node *curr=head;
    while(curr!=NULL)
    {
        cout<<curr->data<<" ";
        curr=curr->next;
        
    }
    
}
int main()
{
   Node *head =new Node(10);
   head->next =new Node(20);
    head->next->next =new Node(30);
    head=sortedinsert(head,25);

    printlist(head);
    return 0;
}