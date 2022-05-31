#include<bits/stdc++.h>
using namespace std;
int naivecountdist(int arr[],int n)
{
    int res=0;
    for(int i=0;i<n;i++)
    {
        bool flag=false;
        for(int j=0;j<i;j++)
        {
             if(arr[i]==arr[j])
             {
                 flag=true;
                 break;
             }
        }
        if(flag==false)
        res++;
    }
    return 0;
}

int countdistinct(int arr[],int n)
{
    unordered_set<int>s;  //we inserted whole the array in a set than printed its size 
    for(int i=0;i<n;i++)  //this function can be replaced by unordered_set<int>s(arr,arr+n)
    {
        s.insert(arr[i]);
    }
    return s.size();
}

int main()
{
   int arr[]={1,2,1,5,4};
   int n = sizeof(arr)/sizeof(arr[0]);
   cout<<countdistinct(arr,n)<<" ";
}