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
int height(Node *root)
{
    if(root==NULL)return 0;
    else
    {
        return 1+max(height(root->left),height(root->right));
    }
}
int diameter(Node *root)
{
    if(root==NULL)return 0;
    int d1=1+height(root->left)+height(root->right);
    return max(d1,max(diameter(root->left),diameter(root->right)));
}

/*METHOD-2*/
int res=0;
int height(Node *root)//this function also return height of tree
{
    if(root==NULL)
        return 0;
    int lh=height(root->left);
    int rh=height(root->right);
    res=max(res,1+lh+rh);//IT IS THE DIAMETER OF TREE
    
        return 1+max(lh,rh);
}






int main()
 {
	
	Node *root=new Node(10);
	root->left=new Node(20);
	root->right=new Node(30);
	root->right->left=new Node(40);
	root->right->right=new Node(60);
	root->right->left->left=new Node(50);
	root->right->right->right=new Node(70);
	
	cout<<diameter(root);
}