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

Node *inserbegin(Node*head,int x)
{
     Node*temp=new Node(x);
     if(head==NULL)
     {
         temp->next=temp;
     }
     else
     {
        Node*curr=head;
        while(curr->next!=head)
        {
            curr=curr->next;
        }
        curr->next=temp;
        temp->next=head;
     }
     return temp;
}

Node*efficient(Node*head,int x)     //it is the efficient method to insert a new node in beggining oflinked list
{
    Node *temp=new Node(x);
    if(head==NULL)
    {
        temp->next=temp;
        return temp;
    }
    else                          
    {   temp->next=head->next;   //we make new node and put it between head and head-next
    head->next=temp;             
        int t=head->data;         //we copy head data in t
        head->data=temp->data;    //chnge the head data with temp data
        temp->data=t;            //and than we copy t to temp data
        return head;
    }
}

void printlist(Node*head)
{
    if(head==NULL) return;
    Node* curr=head;
    do{
        cout<<(curr->data)<<" ";
        curr=curr->next;
    }while(curr!=head);

}





int main()
{
    Node*head;
    head=NULL;
    head=efficient(head,10);
    head=efficient(head,30);
    head=efficient(head,39);
     printlist(head);

}