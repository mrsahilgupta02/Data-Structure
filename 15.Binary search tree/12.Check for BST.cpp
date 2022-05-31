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
/*METHOD -1*/ //FOR every node
              //1.find maximum in left subtree
              //2.find min in right subtree
              //3.cheeck if the current node isgreater than the maximum and smaller than the minimum 
int maxValue(Node *root){
    if (root == NULL) 
        return INT_MIN; 
  
    int res = root->key; 
    int lres = maxValue(root->left); 
    int rres = maxValue(root->right); 
    if (lres > res) 
        res = lres; 
    if (rres > res) 
        res = rres; 
    return res; 
}

int minValue(Node* root) 
{ 
    if (root == NULL) 
      return INT_MAX; 
  
    int res = root->key; 
    int lres = minValue(root->left); 
    int rres = minValue(root->right); 
    if (lres < res) 
      res = lres; 
    if (rres < res) 
      res = rres; 
    return res; 
} 
int isBST(Node* root)  
{  
  if (root == NULL)  
    return 1;  
      
  if (root->left!=NULL && maxValue(root->left) > root->key)  
    return 0;  
      
  if (root->right!=NULL && minValue(root->right) < root->key)  
    return 0;  
    
  if (!isBST(root->left) || !isBST(root->right))  
    return 0;  
      
  return 1;  
}

/*METHOD-2*/
/*pass a range for every node
forr root range is -infinite to +infinite
for left chil of a node in range ,we change upper bound as the node value
for right child of a node ,in range e change lower bound asthe node's value
*/
bool isBST(Node *root,int min,int max)
{
    if(root==NULL)return true;
    return(root->key>min &&root->key<max && isBST(root->left,min,root->key) && isBST(root->right,root->key,max));
}

/*METHOD-3*/
int prevv=INT_MIN;
bool ISBST(Node* root)  
{  
    if (root == NULL)  
        return true;  
    
    if(isBST(root->left)==false)return false;
    
    if(root->key<=prevv)return false;
    prevv=root->key;
    
    return isBST(root->right);
}

int main() {
	
	Node *root = new Node(4);  
    root->left = new Node(2);  
    root->right = new Node(5);  
    root->left->left = new Node(1);  
    root->left->right = new Node(3);  
      
    if(isBST(root))  
        cout<<"Is BST";  
    else
        cout<<"Not a BST";  
          
    return 0;  
	
}