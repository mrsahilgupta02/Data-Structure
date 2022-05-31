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
void printlist(Node*head)
{
    cout<<head->data<<" ";
     while(head->next!=NULL)
    {
        cout<<(head->next->data)<<" ";
        head=head->next;
        
    }
    while(head->prev!=NULL)
    {
        cout<<(head->prev->data)<<" ";
        head=head->prev;
    }

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
    printlist(head);
    
}