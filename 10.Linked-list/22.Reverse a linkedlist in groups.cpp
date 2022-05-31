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
Node *reverse(Node *head,int k)
{
    Node *curr=head,*next=NULL,*prev=NULL;
    int count=0;
    while(curr!=NULL && count<k)//we first reverse the linkeed list for k elements as usinng a count variable
    {
         next=curr->next;
         curr->next=prev;
         prev=curr;
         curr=next;
         count++;
    }
    if(next!=NULL)//here next must be at k+1 position after while loop so we have to check is there more element exist or not
    {
        Node*rest_head=reverse(next,k);//we call reverse function again
        head->next=rest_head;//head is at   its real position  for we connect it to resT_head
 
    }
    return prev;
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
    head->next->next->next=new Node(39);
    head = reverse(head,2);
    printlist(head);

}