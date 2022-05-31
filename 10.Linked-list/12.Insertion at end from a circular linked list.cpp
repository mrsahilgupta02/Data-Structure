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
Node*insertend(Node*head,int x)
{
    Node *temp =new Node(x);
    if(head==NULL)
    {
        temp->next=temp;
        return temp;
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
        return head;
    }
}

Node*efficient(Node*head,int x)     //it is the efficient method to insert a new node in end oflinked list
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
        int t=temp->data;         //we copy temp data in t
        temp->data=head->data;    //chnge the temp data with head data
        head->data=t;            //put temp data in head data
        return temp;             //we return temp because we want ll in same order but a element at last and head data is now in temp so it must be the m1st element of ll
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