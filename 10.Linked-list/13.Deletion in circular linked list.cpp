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
Node *delhead(Node *head)
{
    if(head==NULL)
    {
        return NULL;
    }
    if(head->next==head)
    {
        delete head;
        return NULL;
    }
    Node*curr =head;
    while(curr->next!=head)
    {
        curr=curr->next;
    }
    curr->next=head->next;
    delete head;
    return (curr->next);
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

Node*delheadefficient(Node*head)
{
    if(head==NULL)
    return NULL;

    if(head->next==head)
    {
        delete head;
        return NULL;
    }
    head->data=head->next->data;//we copy head->data in head 
    Node*temp=head->next;       // make anew pointer point to head->next
    head->next=head->next->next;//make head-> ext as head->next->next
    delete temp;
    return head;
}





int main()
{
  Node *head=new Node(10);
	head->next=new Node(5);
	head->next->next=new Node(20);
	head->next->next->next=new Node(15);
	head->next->next->next->next=head;
    head=delheadefficient(head);
	printlist(head);
	return 0;
} 
