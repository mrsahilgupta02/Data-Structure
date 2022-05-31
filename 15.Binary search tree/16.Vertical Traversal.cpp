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
//we create a empty map "mp"
//Do level order traversal put into map
//now traverse the map and print contents
void verticaltraversal(Node *root)
{
    map<int,vector<int>>mp;//we create map for data types int and vector as int for hd and vector is used as more then one values are may be at ame hd
    queue<pair<Node*,int>>q;//as we want hd at popping time so we used pair
    q.push({root,0});
    while(q.empty()==false)
    {
        auto p=q.front();
        Node *curr=p.first;
        int hd=p.second;
        mp[hd].push_back(curr->key);      //here mp[hd] denotes a vector in which we push back
        q.pop();
        if(curr->left!=NULL)
           q.push({curr->left,hd-1});
        if(curr->right!=NULL)
           q.push({curr->right,hd+1});   
    }

    for(auto p:mp)                //we used this to traverse map
    {
        vector<int>v=p.second;
        for(int x:v)                //this for every elemnet in map
        {
            cout<<x<<" ";
        }
        cout<<endl;

    }
}
int main() {
	
	Node *root = new Node(10);  
    root->left = new Node(20);  
    root->right = new Node(30);  
    root->left->left = new Node(40);
    root->left->right = new Node(50);
    
    verticaltraversal(root);
          
    return 0;  
	
}