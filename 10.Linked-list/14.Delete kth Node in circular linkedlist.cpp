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


Node*deletekth(Node*head,int k)
{
    if(head==NULL)
    return head;
    if(k==1)                           //it is the case where we have to delete head so we used your previous ques's function
    {
        return delheadefficient(head);
    }
Node*curr =head;
for(int i=0;i<k-2;i++)
{
   curr=curr->next;
}
Node *temp =curr->next;
curr->next=curr->next->next;
delete temp;
return head;

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
  Node *head=new Node(10);
	head->next=new Node(5);
	head->next->next=new Node(20);
	head->next->next->next=new Node(15);
	head->next->next->next->next=head;
    head=deletekth(head,3);
	printlist(head);
	return 0;
} 