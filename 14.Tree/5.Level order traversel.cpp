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
void printlevel(Node *root)
{
    if(root==NULL)return;
    queue<Node*>q;//we first made a queue and push root
    q.push(root);
    while(q.empty()==false)//until queue is empty
    {
        Node *curr=q.front();
        q.pop();
        cout<<(curr->key)<<" ";
        if(curr->left!=NULL)
        q.push(curr->left);
        if(curr->right!=NULL)
          q.push(curr->right);
    }
}





int main() {
	
	Node *root=new Node(10);
	root->left=new Node(20);
	root->right=new Node(30);
	root->right->left=new Node(40);
	root->right->right=new Node(60);
	root->right->left->left=new Node(50);
	root->right->right->right=new Node(70);
	printlevel(root);
	return 0;
    
}
/*         10
          /  \
         20   30
             /  \
            40   60
           /       \
          50        70
*/            