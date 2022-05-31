#include<bits/stdc++.h>//we have to merge two soted ll in a sorted way
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
void printlist(Node *head){
    Node *curr=head;
    while(curr!=NULL){
        cout<<curr->data<<" ";
        curr=curr->next;
    }cout<<endl;
}
Node *sortedmerge(Node *a,Node *b)
{
    if(a==NULL)return b;     //if a is empty we retrn 2nd ll
    if(b==NULL) return a;    //viceversa
    Node*head=NULL;
    Node*tail=NULL;
    if(a->data<=b->data)    //this case is cornercase as we cant change head and tail as they are null
        {                   //by his we decide head and tail of ll
        head=tail=a;
        a=a->next;
    }
    else
    {
        head=tail=b;
        b=b->next;
    }                      //sahil           
    while(a!=NULL &&b!=NULL)
    {
        if(a->data<=b->data)   //now after we have our head and tail we have to continue
        {                      //if a.data is smaller then it will come first in ll
            tail->next=a;
            tail=a;
            a=a->next;
        }
        else{
            tail->next=b;
            tail=b;
            b=b->next;
        }
    }
    if(a==NULL)   //its the case if all values in a are smaller than b
    tail->next=b;
    else
    tail->next=a;
    return head;
}

int main() 
{ 
	Node *a=new Node(1);
	a->next=new Node(2);
	a->next->next=new Node(30);
	Node *b=new Node(5);
	b->next=new Node(9);
	printlist(sortedmerge(a,b));
	return 0;
} 
//second method to solve this problem
/*Node *head;
    if(head1->data<=head2->data)  
    {
        head=head1;
        head1=head1->next;
    }
    else
    {
        head=head2;
        head2=head2->next;
    }
    Node *curr=head;
    while(head1&&head2)
    {
        if(head1->data<=head2->data)
        {
            curr->next=head1;
            head1=head1->next;
            curr=curr->next;
        }
        else
        {
            curr->next=head2;
            head2=head2->next;
            curr=curr->next;
        }
    }
    if(head1==NULL)
    {
        curr->next=head2;
    }
    else
    {
        curr->next=head1;
    }
    return head;

    */