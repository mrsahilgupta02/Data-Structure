#include <bits/stdc++.h>
using namespace std;
struct Node // we had modified struct accordinglys
{
    int key;
    Node *left, *right;
    int lcount; // lcount is count of nodes in the left subtree
    Node(int k)
    {
        key = k;
        left = right = NULL;
        lcount = 0;
    }
};

Node *insert(Node *root, int x)
{
    if (root == NULL)
        return new Node(x);
    if (root->key > x)
    {
        root->left = insert(root->left, x);
        root->lcount++; // so that every node has its lcount
    }
    else if (root->key < x)
    {
        root->right = insert(root->right, x);
    }
    return root;
}
Node *kthsmallest(Node *root, int k)
{
    if (root == NULL)
        return NULL;
    int count = root->lcount + 1; // lcount is nu of nodes left to it
    if (count == k)
        return root;
    if (count > k)
        return kthsmallest(root->left, k);
        
    return kthsmallest(root->right, k - count); // we used k-count as count values are semmed already
}
int main()
{
    Node *root = NULL;
    int keys[] = {20, 8, 22, 4, 12, 10, 14};

    for (int x : keys)
        root = insert(root, x);

    int k = 4;
    Node *res = kthsmallest(root, k);
    if (res == NULL)
        cout << "There are less than k nodes in the BST";
    else
        cout << "K-th Smallest Element is " << res->key;
    return 0;
}