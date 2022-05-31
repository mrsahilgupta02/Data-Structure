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
bool findpath(Node *root ,vector<Node *>&p,int n)
{
    if(root==NULL)return false;
    p.push_back(root);
    if(root->key==n)return true;
    if(findpath(root->left,p,n)||findpath(root->right,p,n));
               return true;
    p.pop_back();
    return false;
}