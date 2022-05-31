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
void detectremoveloop(Node *head)// in this we find if there is a loop or not by floyds method
{
    Node *slow=head;
    Node *fast=head;
    while(fast!=NULL&&fast->next!=NULL)//if yes then we take slow to heaad and fast at that exact postion than move both by 1 step 
    {                                  //once fast-<next and slow->next meet we make fast->next=NULL;
        slow=slow->next;
        fast=fast->next->next;
        if(slow==fast)
           break;
    }
    if(slow!=fast)
       return;
    slow=head;
    while(slow->next!=fast->next)
    {
        slow=slow->next;
        fast=fast->next;
    }   
    fast->next=NULL;
}
int main() 
{ 
	Node *head=new Node(15);
	head->next=new Node(10);
	head->next->next=new Node(12);
	head->next->next->next=new Node(20);
	head->next->next->next->next=head->next;
	detectremoveloop(head); 
    
    while(head)
    {
        cout<<head->data<<" ";
        head=head->next;
    }
} 