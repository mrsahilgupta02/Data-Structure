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
bool search(Node *root,int x)//recursive method
{
    if(root==NULL)
    return false;
    else if(root->key==x)
    return true;
    else if(root->key>x)
      return search(root->left,x);
    else
       return search(root->right,x);  
}

bool Searh(Node *root,int x)//iterative method
{
    while(root!=NULL)
    {
        if(root->key==x)
        return true;
        else if(root->key<x)
         root=root->right;
        else
        root=root->left; 
    }
    return false;
}



int main() {
	
	Node *root=new Node(15);
	root->left=new Node(5);
	root->left->left=new Node(3);
	root->right=new Node(20);
	root->right->left=new Node(18);
	root->right->left->left=new Node(16);
	root->right->right=new Node(80);
	int x=16;
	
	if(search(root,x))
	    cout<<"Found";
	else
	    cout<<"Not Found";
}

/*
timE complexity=0(h)
aux space for recursive:0(h)
aux space for iterative:o(1)
*/