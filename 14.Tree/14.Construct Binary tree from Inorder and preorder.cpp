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
void inorder(Node *root)//we have eritten it just to cross check out ctree program
{
    if(root!=NULL){
        inorder(root->left);
        cout<<root->key<<" ";
        inorder(root->right);    
    }
}  

 int preindex=0;
 
 Node *ctree(int pre[],int is,int ie,unordered_map<int,int>&m)
 {
     if(is>ie)return NULL;                             //is=inorderstart
                                                       //ie=inorderend
     Node *root=new Node(pre[preindex++]);             //first element of preorder is the root of tree  
     root->left=ctree(pre,is,m[root->key]-1,m);          //here m[root->key ] will give us the index of root->key stored in map
     root->right=ctree(pre,m[root->key]+1,ie,m);       //the elements which are on left of root->key in inorder will be in left subtree 
     return root;                                      //the elements which are on right of root->key in inorder will be in right subtree 
 }
 int main()
 {               
     int in[]={20,10,40,30,50};
	int pre[]={10,20,30,40,50};
	int n=sizeof(in)/sizeof(in[0]);
    unordered_map<int,int>m;
    int i=0;
    for(auto it: in )
    {
        m[it]=i++;
    }
    cout << m[20] << endl;
	Node *root=ctree( pre, 0, n-1,m);
    inorder(root);
 }