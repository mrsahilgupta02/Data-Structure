#include<bits/stdc++.h>
using namespace std;
struct Node
{
    int data;
    Node*next;
    Node(int x)
    {
        data=x;
        next=NULL;
    }
};
void print(Node* head,int n)
{
   int len=0;
   for(Node*curr=head;curr!=NULL;curr=curr->next)
   {
       len++;
   }
   if(len<n)
   return ;
   Node *curr=head;
   for(int i=1;i<len-n+1;i++)
   {
       curr=curr->next;
   }
   cout<<(curr->data)<<" ";
}
void efficient(Node *head,int n)//in tis so;ution we take two pointers
{                               //we iteratae fast from head  toa n position 
    if(head==NULL)return;       //then we iterate fast and slow togethwr and when fast is aat null slow must bea at th nth position
    Node*fast=head;
    for(int i=0;i<n;i++)
    {
        if(fast==NULL)return;
        fast=fast->next;
    }
    Node*slow=head;
    while(fast!=NULL)
    {
        slow=slow->next;
        fast=fast->next;
    }
    cout<<(slow->data)<<" ";
}


int main()
{
   Node *head =new Node(10);
   head->next =new Node(20);
    head->next->next =new Node(30);
    efficient(head,2);
    return 0;
}
