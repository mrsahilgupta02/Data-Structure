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

void printkth(Node *root,int k,int &count)//naive method
{
    if(root!=NULL)
    {
        printkth(root->left,k,count);
        count++;
        if(count==k)
        {
        cout<<root->key<<" "<<k;
        return;                                //by using return here we optimised time compleity to 0(h+k) from o(n)
        }
        printkth(root->right,k,count);
    }

}





int main() {
	
	Node *root=new Node(15);
	root->left=new Node(5);
	root->left->left=new Node(3);
	root->right=new Node(20);
	root->right->left=new Node(18);
	root->right->left->left=new Node(16);
	root->right->right=new Node(80);
	int k=3;
	int count=0;
	cout<<"Kth Smallest: ";
	printkth(root,k,count);
	
	return 0;
}

