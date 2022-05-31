#include<bits/stdc++.h>
using namespace std;
struct Node
{
    int key;
    Node *left;
    Node *right;
    Node(int k)
    {
       key=k;
       left=right=NULL;
    }
};
int maxlevel=0;
void printLeft(Node*root,int level)//recusive method
{
    if(root==NULL)return;                
    if(maxlevel<level)              // check is maxlevel is less than level or not as we want to print only one element from every level
    {
        cout<<(root->key)<<" ";
        maxlevel=level;              //make maxlevel as level
    }
    printLeft(root->left,level+1);
    printLeft(root->right,level+1);
}
void printLeftView(Node *root)
{
    printLeft(root,1);
}


/*ITERATIVE METHOD*/
void printleft(Node *root)
{
    if(root==NULL)return;             
    queue<Node*>q;               //iniialize a queue
    q.push(root);
    while(q.empty()==false)
    {
        int count=q.size();
        for(int i=0;i<count;i++)
        {
            Node *curr=q.front();
            q.pop();
            if(i==0)                   //it is same as level order traversal line by line metnhd 2 but here we only want to print 1 value
            cout<<(curr->key)<<" ";
            if(curr->left!=NULL)
               q.push(curr->left);
            if(curr->right!=NULL)
               q.push(curr->right);   
        }
    }
}


int main() {
	
	Node *root=new Node(10);
	root->left=new Node(20);
	root->right=new Node(30);
	root->right->left=new Node(40);
	root->right->right=new Node(50);
	
	printLeftView(root);
}