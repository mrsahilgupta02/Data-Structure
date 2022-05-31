#include<bits/stdc++.h>
using namespace std;
struct Node
{
    int data;
     Node* next;
    Node(int x)
    {
         data =x;
        next =NULL;
    }
};
void printlist(Node*head)
{
    Node *curr=head;
    while(curr!=NULL)
    {
        cout<<curr->data<<" ";
        curr=curr->next;
        
    }
    
}
//recursive method
void rprint(Node* head)//here we made a copy by using ppointer head
{
    if(head==NULL)
    return;
    
    cout<<(head->data)<<" ";
     rprint(head->next);
}

int main()
{
   Node *head =new Node(10);
   head->next =new Node(20);
    head->next->next =new Node(30);
    rprint(head);
    return 0;
}