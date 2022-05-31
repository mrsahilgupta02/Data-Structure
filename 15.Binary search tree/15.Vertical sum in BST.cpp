#include<bits/stdc++.h>//if we go left horizonatal distance get decrementdby 1 ans if we hgo i righ hd get incremented by 1
using namespace std;    //we have to print sum of vaues for every hd
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

//create a map that stores sum for agiven orizontal diatance
  //traverse the map and prit values
void vsumr(Node *root,int hd,map<int,int> &mp)
{
    if(root==NULL)return;
    vsumr(root->left,hd-1,mp);
    mp[hd]+=root->key;
    vsumr(root->right,hd+1,mp);
}
void vsum(Node *root)
{
    map<int,int>mp;
    vsumr(root,0,mp);
    for(auto sum:mp)
       cout<<(sum.second)<<" ";
}
int main() {
	
	Node *root = new Node(10);  
    root->left = new Node(20);  
    root->right = new Node(50);  
    root->left->left = new Node(30);
    root->left->right = new Node(40);
    
    vsum(root);
          
    return 0;  
	
}