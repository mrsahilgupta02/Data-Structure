#include<bits/stdc++.h>
using namespace std;
bool ispair(int arr[],int n,int sum)
{
    unordered_set<int>h;
    for(int i=0;i<n;i++)
    {
        if(h.find(sum-arr[i])!=h.end())
           return true;
        else{
            h.insert(arr[i]);
        }   
    }
    return false;
}
int main()
{
    int a[]={1,4,2,6,4};
    int n=sizeof(a)/sizeof(a[0]);
    cout<<ispair(a,n,11);
}    