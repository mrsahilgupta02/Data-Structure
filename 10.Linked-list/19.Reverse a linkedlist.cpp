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
Node*revlist(Node*head)
{
    vector<int>arr;
    for(Node*curr=head;curr!=NULL;curr=curr->next)
    {
        arr.push_back(curr->data);
    }
    for(Node*curr=head;curr!=NULL;curr=curr->next)
    {
        curr->data=arr.back();
        arr.pop_back();
    }
    return head;
}
Node *reverse(Node*head)//efficient method
{
    Node *curr=head;
    Node *prev=NULL;
    while(curr!=NULL)
    {
        Node*next=curr->next;//for every iteration we make a pointe next which point to curr->next
        curr->next=prev;
        prev=curr;
        curr=next;
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
    head = reverse(head);
    printlist(head);

}