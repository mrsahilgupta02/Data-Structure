#include<bits/stdc++.h>
using namespace std;
struct Node
{
    int data;
    Node*next;
    Node(int d)
    {
        data=d;
        next=NULL;
    }
};
Node *reverseList(Node *head){
    if(head==NULL||head->next==NULL)return head;
    Node *rest_head=reverseList(head->next);
    Node *rest_tail=head->next;
    rest_tail->next=head;
    head->next=NULL;
    return rest_head;
}



bool ispalindrome(Node*head)                    //We push whole ll in stack and then by popping checking is it equal to ll or not
{
    stack<char>st;
    for(Node*curr=head;curr!=NULL;curr=curr->next)
    {
        st.push(curr->data);
    }
    for(Node*curr=head;curr!=NULL;curr=curr->next)
    {
        if(st.top()!=curr->data)
          return false;
          st.pop();
    }
    return true;
}


bool ispalindromeEfficient(Node*head)         //here we will reverse the second half of the ll and then compare with firs half of ll
{
    if(head==NULL)return true;

    Node*slow=head,*fast=head;
    while(fast->next!=NULL&&fast->next->next!=NULL)
    {
        slow=slow->next;
        fast=fast->next->next;
    }
     Node *rev=reverseList(slow->next);     //we have to reverse the list from next of slow
        Node *curr=head;
        while(rev!=NULL){
            if(rev->data!=curr->data)
                return false;
            rev=rev->next;
            curr=curr->next;
        }
        return true;
    
}
int main() 
{ 
	Node *head=new Node('g');
	head->next=new Node('f');
	head->next->next=new Node('f');
    head->next->next->next=new Node('g');
	if(ispalindromeEfficient(head))
	    cout<<"Yes";
	else
	    cout<<"No";
	return 0;
} 
