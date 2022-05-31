#include<bits/stdc++.h>
using namespace std;
int res=0;
int intersect(int a[],int b[],int m,int n)
{
    unordered_set<int>s(a,a+m);//we put array a in a set
    for(int i=0;i<n;i++)       //traverse in array b
    {
        if(s.find(b[i]) !=s.end())//we start finding b[i] in set s if find thn res++ 
        {
            res++;
            s.erase(b[i]);        //we are doing this because if b[i] repeats i array b than it again get counted so we delete b[i] from set a
        }
    }
    return res;

}
int main()
{
    int a[]={1,4,2,6,4};
    int b[]={2,5,3,6,4};
   int m=sizeof(a)/sizeof(a[0]);
    int n=sizeof(b)/sizeof(b[0]);
    cout<<intersect(a,b,m,n)<<" ";
}