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
    if(root!=NULL)
    {
        inorder(root->left);
        cout<<root->key<<" ";
        inorder(root->right);
    }
}



Node *pre=NULL,*first=NULL,*second=NULL;
void fixBST(Node *root)
{
    if(root==NULL)return;
    fixBST(root->left);
    if(pre!=NULL &&root->key<pre->key)
    {
       if(first==NULL)                 //we used this becuae for first voilation we want the vlue before thevalue which voilated bst
         first=pre;                    //in our example 10 voilate bst but we want 60 to swap with 8
       second=root;     
    }
    pre=root;
    fixBST(root->right);
}
int main() {
	
	Node *root = new Node(18);  
    root->left = new Node(60);  
    root->right = new Node(70);  
    root->left->left = new Node(4);  
    root->right->left = new Node(8);
    root->right->right = new Node(80);  
    
    inorder(root); 
    cout<<endl;
    fixBST(root);
    int temp=first->key;
    first->key=second->key;
    second->key=temp;
    inorder(root);
          
    return 0;  
	
}