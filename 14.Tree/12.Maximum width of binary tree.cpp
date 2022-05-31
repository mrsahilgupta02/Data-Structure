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
int maxWidth(Node *root)//max width of a tree is max number of nodes in 1 line
{                        
    if(root==NULL)       //so we can use order traversal line by line 
    {
        return 0;
    }
    queue<Node *>q;
    q.push(root);
    int res=0;
    while(q.empty()==false)
    {
        int count=q.size();
        res=max(res,count);          //count is number of elements in queue and also number of nodes in line
        for(int i=0;i<count;i++)
        {
            Node *curr=q.front();
            q.pop();
            if(curr->left!=NULL)q.push(curr->left);
            if(curr->right!=NULL)q.push(curr->right);
        }
    }
}