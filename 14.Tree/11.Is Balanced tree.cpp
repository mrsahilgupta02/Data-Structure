#include<bits/stdc++.h> //a balanced treee is that where left height and right height dont have difference more than 1for every node
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
    if(root==NULL)
    return 0;
    else
    return (1+max(height(root->left),height(root->right)));
}
bool isbalanced(Node *root)
{
    if(root==NULL)return 0;
    int lh=height(root->left);
    int rh=height(root->right);
    return (abs(lh-rh)<=1 && isbalanced(root->left) && isbalanced(root->right));
}

/*Method -2*/
int isBalanced(Node *root)//this function return -1 if its is not balanced and height of tree if it id balanced
{
    if(root==NULL)return 0;
    int lh=isBalanced(root->left);
    if(lh==-1)return -1;
     int rh=isBalanced(root->right);
    if(rh==-1)return -1;
    if(abs(lh-rh)>1)return -1;
    return max(lh,rh)+1;

} 