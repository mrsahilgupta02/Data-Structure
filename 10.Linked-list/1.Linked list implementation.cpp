#include<bits/stdc++.h>
using namespace std;
struct Node   //we mde  NODE of type struct
{
    int data;
    Node *next;
    Node(int x)
    {
        int data =x;
        next =NULL;
    }
};

int main()
{
    Node*head =new Node(20);
    head->next =new Node(10);
    head->next->next =new Node(30);
}