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
void removedup(Node*head)
{
    Node*curr=head;
    while(curr!=NULL&&curr->next!=NULL)
    {
        if(curr->data==curr->next->data)//we just check is curr next dat is = to curr data or not
        {                               //if yes then we do curr next=curr->next next and delete temp
            Node*temp=curr->next;       //otherwise we do justcurr->next
            curr->next=curr->next->next;
            delete(temp);
        }
        else{
            curr=curr->next;
        }
    }
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
   head->next =new Node(10);
    head->next->next =new Node(30);
    removedup(head);
    printlist(head);

}
