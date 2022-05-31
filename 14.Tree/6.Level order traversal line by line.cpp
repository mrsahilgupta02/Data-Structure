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
/*METHOD-1*/
void printlevelordertraversal(Node *root)
{
    if(root==NULL) return;
    queue<Node*>q;
    q.push(root);
    q.push(NULL);//we push NULL here to print line gap
    while(q.size()>1)
    {
        Node *curr=q.front();
        q.pop();
        if(curr==NULL)//if popped item is null then it means it time to change line and we push null becuse whole current line in inside q
        {
            cout<<"\n";
            q.push(NULL);
            continue;
        }
        cout<<((curr->key))<<" ";
        if(curr->left!=NULL)q.push(curr->left);
        if(curr->right!=NULL)q.push(curr->right);
    }
    
}

/*METHOD-2*/
void printlevelordertraversal2(Node *root)
{
    if(root==NULL)return;
    queue<Node*>q;//we first made a queue and push root
    q.push(root);
    while(q.empty()==false)//until queue is empty
    {
       int count=q.size();
       for(int i=0;i<count;i++)
       {
           Node *curr=q.front();
           q.pop();
           cout<<(curr->key)<<" ";
           if(curr->left!=NULL)q.push(curr->left);
        if(curr->right!=NULL)q.push(curr->right);
       }
     cout<<endl;
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
	printlevelordertraversal2(root);
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