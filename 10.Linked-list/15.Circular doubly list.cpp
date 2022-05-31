#include<bits/stdc++.h>
using namespace std;
struct Node//we are defining a node of type struct
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
Node*inserthead(Node*head,int x)
{
    Node*temp=new Node(x);
    if(head==NULL)
    {
        temp->next=temp;
        temp->prev=temp;
        return temp;
    }
    temp->prev=head->prev;
    temp->next=head;
    head->prev->next=temp;
    head->prev=temp;
    return temp;
}

void printlist(Node *head){
    if(head==NULL)return;
    Node *p=head;
    do{
        cout<<p->data<<" ";
        p=p->next;
    }while(p!=head);
}

int main()
{
 Node *head =NULL;
    head=inserthead(head,10);
    head=inserthead(head,20);
    head=inserthead(head,30);
    printlist(head);
}