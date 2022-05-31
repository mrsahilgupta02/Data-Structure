#include<bits/stdc++.h>
using namespace std;
struct Node
{
    int key;
    Node *right;
    Node *left;
    Node(int k)
    {
        key=k;
        right=left=NULL;

    }
};
void inorder(Node *root)
{
    if(root!=NULL){
    inorder(root->left);
    cout<<root->key<<" ";
    inorder(root->right);
    }
}
Node* insert(Node *root,int x)//recursive method
{
    if(root==NULL)
    return new Node(x);
    else if(root->key<x)
    {
        root->right=insert(root->right,x);
    }
    else if(root->key>x)
        root->left=insert(root->left,x);
    return root;    
}

/* METHOD-2*/
Node *Insert(Node *root,int x)
{
    Node *temp=new Node(x);
    Node *parent=NULL,*curr=root;
    while(curr!=NULL)
    {
        parent=curr;
        if(curr->key>x)
        curr=curr->left;
        else if(curr->key<x)
        curr=curr->right;
        else return root;
    }
    if(parent==NULL)
    return temp;
    if(parent->key>x)
    parent->left=temp;
    else
    parent->right=temp;
    return root;
}


int main() {
	
	Node *root=new Node(10);
	root->left=new Node(5);
	root->right=new Node(15);
	root->right->left=new Node(12);
	root->right->right=new Node(18);
	int x=20;
	
	root=insert(root,x);
	inorder(root);
}