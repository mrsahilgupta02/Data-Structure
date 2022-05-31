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
void printspiral(Node *root)                 //i is like order traversal 
{
    if(root==NULL)return;
    queue<Node*>q;
    stack<int>s;               
    bool reverse=false;                      //so we use a reverse variable
    q.push(root);
    while(q.empty()==false)
    {
        int count=q.size();
        for(int i=0;i<count;i++)
        {
            Node *curr=q.front();
              
            q.pop();
            if(reverse)                    //if its true we push eleants to stack
            {
                s.push(curr->key);
            }
            else                           //if its true we print elements
            { 
            cout<<curr->key<<" ";
            
            }
           
            if(root->left!=NULL)q.push(curr->left);
            if(root->right!=NULL)q.push(curr->right);
        }
        if(reverse)                     //if reverse is true we poop all elements one one by one and pritn them
        {
            while(s.empty()==false)
            {
            
            cout<<s.top()<<" ";
            s.pop();
            }
            
        }
        reverse=!reverse;

    }
}


/*METHOD-2*/

void printSpiral(Node *root){
    if (root == NULL) 
        return;  

    stack<Node*> s1;  
    stack<Node*> s2;  
  
    s1.push(root); 
  
    while (!s1.empty() || !s2.empty())
     { 
        while (!s1.empty()) 
        { 
            Node* temp = s1.top(); 
            s1.pop(); 
            cout << temp->key << " "; 
  
            if (temp->right) 
                s2.push(temp->right); 
            if (temp->left) 
                s2.push(temp->left); 
        } 
        
        while (!s2.empty())
         { 
            Node* temp = s2.top(); 
            s2.pop(); 
            cout << temp->key << " "; 
  
            if (temp->left) 
                s1.push(temp->left); 
            if (temp->right) 
                s1.push(temp->right); 
        } 
        
    } 
}  





int main() {
	
	Node *root=new Node(1);
	root->left=new Node(2);
	root->right=new Node(3);
	root->left->left=new Node(4);
	root->left->right=new Node(5);
	root->left->left->left=new Node(6);
	root->right->right=new Node(7);
	
	printSpiral(root);
}