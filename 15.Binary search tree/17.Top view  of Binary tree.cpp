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
void topview(Node *root)  //its concet is sae as vertical traversal but here we dont need vector for every we just need first value
{
    map<int,int>mp;
    queue<pair<Node*,int>>q;
    q.push({root,0});
    while(q.empty()==false)
    {
       auto p=q.front();
        Node *curr=p.first;
        int hd=p.second;
        if(mp.find(hd)==mp.end())       //this condition is for that we only have i value for 1 hd 
        {
          mp[hd]=(curr->key);
        }
          q.pop();
          if(curr->left!=NULL)
           q.push({curr->left,hd-1});
        if(curr->right!=NULL)
           q.push({curr->right,hd+1});  
    }
    for(auto x:mp)
    {
        cout<<x.second<<" ";
    }
}
int main() {
	
	Node *root = new Node(10);  
    root->left = new Node(20);  
    root->right = new Node(30);  
    root->left->left = new Node(40);
    root->left->right = new Node(50);
    
    topview(root);
          
    return 0;  
	
}