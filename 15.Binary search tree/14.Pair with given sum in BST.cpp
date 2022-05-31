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
/*METHOD-1*/                              //DO AN INORDER TRAVERSAL of the given bst and store it in an array
                                          //use two pointers approach to find if array has a pair with given sum
void treeToList(Node *root, vector<int> &list) 
    { 
        if (root == NULL) 
            return; 
  
        treeToList(root->left, list); 
        list.push_back(root->key); 
        treeToList(root->right, list); 
    }
    
bool isPairPresent(Node *root, int target) 
{ 
        vector<int> a2; 
  
        treeToList(root, a2); 
  
        int start = 0; 
  
        int end = a2.size() - 1;  
  
        while (start < end) { 
  
            if (a2[start] + a2[end] == target)  
            { 
                cout<<"Pair Found: " << a2[start] << " + " << a2[end] << " "
                                   << "= " << target; 
                return true; 
            } 
  
            if (a2[start] + a2[end] > target) // decrements end 
            { 
                end--; 
            } 
  
            if (a2[start] + a2[end] < target) // increments start 
            { 
                start++; 
            } 
        } 
  
        cout<<"No such values are found!"; 
        return false; 
} 
/*METHOD-2*///USING SET
 bool ispairsum(Node *root,int sum,unordered_set<int>& s)
 {
     
     if(root==NULL)return false;
     if(ispairsum(root->left,sum,s)==true) 
            return true;
     if(s.find(sum-root->key)!=s.end())
            return true;
     else
             s.insert(root->key);
     return ispairsum(root->right,sum,s);
 }




int main() {
	
	Node *root = new Node(10);  
    root->left = new Node(8);  
    root->right = new Node(20);  
    root->left->left = new Node(4);
    root->left->right = new Node(9);
    root->right->left = new Node(11);
    root->right->right = new Node(30);  
    root->right->right->left = new Node(25);
        
    int sum=33;
        
    isPairPresent(root,sum);
          
    return 0;  
	
}