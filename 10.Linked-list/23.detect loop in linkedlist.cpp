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
bool isloop(Node*head)//in this method we did that as we see is pur node connected to a temp nodenode if yes than print true 
{                           //if not it will make it point to temp so that next time if that element coomes again then we can have ou answer 
    Node *temp=new Node(0);
    Node*curr=head;
    while(curr!=NULL)
    {
        if(curr->next==NULL)//thi method is only applicable when changes to ll is allowed
          return false;
        if(curr->next==temp)
           return true;

        Node*currnext=curr->next;
        curr->next=temp;
        curr=currnext;   

    }
    return false;

}


bool isloophashing(Node*head)   //in this method we make a hash map and start inserting values one by one as we find the element in hash alresdy then we return true
{
    unordered_set<Node *> s;
    for(Node*curr=head;curr!=NULL;curr=curr->next)
    {
        if(s.find(curr)!=s.end())
            return true;

         s.insert(curr);   
    }
    return false;
}
int main() 
{ 
	Node *head=new Node(15);
	head->next=new Node(10);
	head->next->next=new Node(12);
	head->next->next->next=new Node(20);
	head->next->next->next->next=head->next;
	if (isloop(head)) 
        cout << "Loop found"; 
    else
        cout << "No Loop"; 
	return 0;
} 
