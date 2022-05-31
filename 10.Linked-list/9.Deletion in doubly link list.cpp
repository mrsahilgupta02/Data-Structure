#include<bits/stdc++.h>
using namespace std;
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

Node *delhead(Node*head)
{
    if(head==NULL)return NULL;

    if(head->next==NULL)
    {
        delete head;
        return NULL;
    }
    else
    {
        Node *temp=head;
        head=head->next;
        head->prev=NULL;
        delete temp;
        return head;
    }
}
Node *dellast(Node *head)//for deleting last element 
{
    if(head==NULL)
       return NULL;
    if(head->next==NULL)
    {
        delete head;
        return NULL;

    }
    Node* curr=head;
    while(curr->next!=NULL)
    {
        curr=curr->next;
    }
    curr->prev->next=NULL;//here we have to delete the last node so we must have a pointer on that but we have to make next ofits previous element as null 
    delete curr;          //so we did curr->prev->next=null
    return head;
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
    dellast(head);
    Node*curr=head;//here we usenew curr pointer  because we cant change head for iteration 
    while(curr!=NULL)
    {
        cout<<curr->data<<" ";
        curr=curr->next;
    }
}