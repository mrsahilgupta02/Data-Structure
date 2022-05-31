#include<bits/stdc++.h>
using namespace std;
struct Node
{
    int key;
    Node *left,*right;
    Node(int k)
    {
        key=k;
        left=right=NULL;
    }
};

Node *BTTODLL(Node *root)
{
    if(root==NULL)return root;
    static Node *prev=NULL;
    Node *head=BTTODLL(root->left);
    if(prev==NULL){head=root;}         //ths isto make head of our new linkedlist as prev is only null for firstt Node
    else
    {
        root->left=prev;
        prev->right=root;
    }
    prev=root;
    BTTODLL(root->right);
    return head;
}







/*

                10
               /  \
              5    20              ->  5 10 30 20 35
                  /  \             
                 30   35           
*/                 