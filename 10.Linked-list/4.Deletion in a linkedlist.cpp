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

Node *delhead(Node*head)
{
    if(head==NULL)
    {
        return NULL;
    }
    else{
     Node*temp=head->next;
     delete head;
     return temp;
    }
}

Node *dellast(Node*head)
{
    if(head==NULL)return NULL;
    if(head->next==NULL)
    {
        delete head;
        return NULL;
    }
    Node *curr=head;
    while(curr->next->next!=NULL)
    {
        curr=curr->next;
    }
    delete(curr->next);
    curr->next=NULL;
    return head;
}





int main()
{
    Node*head =new Node(20);
    head->next =new Node(10);
    head->next->next =new Node(30);
    dellast(head);
    while(head)
    {
        cout<<head->data<<" ";
        head=head->next;
    }
    return 0;

}