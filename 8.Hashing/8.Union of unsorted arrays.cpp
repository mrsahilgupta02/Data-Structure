#include<bits/stdc++.h>
using namespace std;
int unioncount(int a[],int b[],int m,int n)
{
    unordered_set<int>h(a,a+m);
    for(int i=0;i<n;i++)
    {
        h.insert(b[i]);
    }
    return h.size();

}
int main()

    
{
    int a[]={1,4,2,6,4};
    int b[]={2,5,3,6,4};
    int m=sizeof(a)/sizeof(a[0]);
    int n=sizeof(b)/sizeof(b[0]);
    cout<<unioncount(a,b,m,n);
}