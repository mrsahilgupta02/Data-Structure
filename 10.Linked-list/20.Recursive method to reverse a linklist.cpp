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
Node*recrev(Node*head)
{
    if(head==NULL ||head->next==NULL)
    {
        return head;
    }
    Node *resthead=recrev(head->next);
    Node *resttail=head->next;
    resttail->next=head;
    head->next=NULL;
    return resthead;

}
Node *recrev2(Node*curr,Node*prev)
{
    if(curr==NULL)return prev;

    Node*next=curr->next;
    curr->next=prev;
    return recrev2(next,curr);



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
    head = recrev(head);
    printlist(head);

}