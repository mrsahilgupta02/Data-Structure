#include<bits/stdc++.h>//in this ques we hve to reurn just graeter value on lift side for every element
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
void printceiling(int arr[],int n)//naive approach
{
    cout<<-1;
    for(int i=1;i<n;i++)
    {
        int diff=INT_MAX;     //we make diff as max positive value for every value
        for(int j=0;j<i;j++)
        {
            if(arr[j]>=arr[i])
             diff=min(diff,arr[j]-arr[i]);
        }
        if(diff==INT_MAX)
          cout<<-1;
          else
          cout<<(arr[i]+diff);

    }
}
void printCeiling(int arr[],int n)
{
    cout<<-1<<" ";
    set<int>s;
    s.insert(arr[0]);
    for(int i=1;i<n;i++)
    {
        if(s.lower_bound(arr[i])!=s.end())
        {
            cout<<*(s.lower_bound(arr[i]))<<" ";//as lower bound is used to find value equal to greater then

        }
        else
        cout<<-1<<" ";

        s.insert(arr[i]);
    }

}

int main() {
	
	int arr[]={2,8,30,15,25,12};
	int n=sizeof(arr)/sizeof(arr[0]);
	
	printCeiling(arr,n);
}