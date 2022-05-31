#include<bits/stdc++.h>//in this ques we have to print even nodes and odd node differently
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

void printlist(Node *head){
    Node *curr=head;
    while(curr!=NULL){
        cout<<curr->data<<" ";
        curr=curr->next;
    }cout<<endl;
}
Node*segregate(Node*head)
{
    Node *es=NULL,*eE=NULL,*oS=NULL,*oE=NULL;          //es=even start
                                                       //eE=even end
                                                       //oS=odd start
                                                       //oE=odd end
    for(Node*curr=head;curr!=NULL;curr=curr->next) //here we check is the data odd or even
    {
        int x=curr->data;
        if(x % 2==0)
        {
            if(es==NULL)                         //if no even elements already
            {
                es=curr;
                eE=es;
            }
            else
            {
                eE->next=curr;
                eE=eE->next;
            }
        }
        else                       //for odd data
        {
            if(oS==NULL)               //no odd data already
            {
                oS=curr;
                oE=oS;
            }
            else                       
            {
                oE->next=curr;
                oE=oE->next;
            }
        }
    }

     if(oS==NULL||es==NULL)     //if there are no even or odd nu in ll then we can print the same ll 
     {
         return head;
     }
     eE->next=oS;
     oE->next=NULL;
     return es;


}


int main() 
{ 
	Node *head=new Node(17);
	head->next=new Node(15);
	head->next->next=new Node(8);
	head->next->next->next=new Node(12);
	head->next->next->next->next=new Node(10);
	head->next->next->next->next->next=new Node(5);
	head->next->next->next->next->next->next=new Node(4);
	printlist(head);
	head=segregate(head);
	printlist(head);
	return 0;
} 