#include<bits/stdc++.h>
using namespace std;
struct Node
{
   int data;
   Node *next;
   Node(int d)
   {
       data=d;
       next=NULL;
   }
};
struct mystack
{
    Node *head;
    int sz;
    mystack()
    {
        head=NULL;
        sz=0;
    }
    void push(int x)
    {
        Node *temp=new Node(x);
        temp->next=head;
        head=temp;
        sz++;
    }
    int pop()
    {
        if(head==NULL)
        {
            return INT_MAX;
        }
        int res=head->data;
        Node *temp=head;
        head=head->next;
        delete(temp);
        sz--;
        return res;
    }

    int size()
    {
        return sz;
    }
    bool isempty()
    {
        return (head==NULL);
    }
    int peek()
    {
        if(head==NULL)
        return INT_MAX;
        else{
            return head->data;
        }
    }
};
int main()
{
    mystack s;
    s.push(5);
    s.push(4);
    cout<<s.size()<<endl;
    cout<<s.pop()<<endl;
    cout<<s.size()<<endl;
    cout<<s.peek()<<endl;
}