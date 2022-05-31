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


Node *getsuccessor(Node *curr)    //it is the function where 
{
    curr=curr->right;
    while(curr!=NULL && curr->left!=NULL)
    {
        curr=curr->left;
    }
    return curr;
}



Node *delNode(Node *root,int x)
{
    if(root==NULL)return root;
    if(root->key>x)
       root->left=delNode(root->left,x);//if  xis smaller than root key than wego to left node
    else if(root->key<x)
     root->right=delNode(root->right,x);//if x is graeter then 
     else                                 //it is the case when root has to be deleted
     {
         if(root->left==NULL)          //uf roots left is null
         {
             Node *temp=root->right;
             delete root;
             return temp;
         }
         else if(root->right==NULL)
         {
             Node *temp=root->left;
             delete root;
             return temp;
         }
         else
         {
            Node *succ=getsuccessor(root);           //if we have both right and left of a node then we have t find a succesor 
            root->key=succ->key;                     //we change roots key to succ key
            root->right=delNode(root->right,succ->key);  //then we have to delete that succ node ,and we are doing this as we are checked only 
         }                                             //left keys as if succ has a right key we cant delete it as normally
         
     }
     return root;
}
void inorder(Node *root){
    if(root!=NULL){
        inorder(root->left);
        cout<<root->key<<" ";
        inorder(root->right);    
    }
} 
int main() {
	
	Node *root=new Node(10);
	root->left=new Node(5);
	root->right=new Node(15);
	root->right->left=new Node(12);
	root->right->right=new Node(18);
	int x=15;
	
	root=delNode(root,x);
	inorder(root);
}