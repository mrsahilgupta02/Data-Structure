#include<bits/stdc++.h>
using namespace std;
int longestsub(int arr[],int n)
{
    int res=0;
    for(int i=0;i<n;i++)
    {
        int c0=0,c1=0;
        for(int j=i;j<n;j++)
        {
            if(arr[j]==0)
               c0++;
            else
               {
                   c1++;
               }
            if(c0==c1)
            res=max(res,c0+c1);   
        }
    }
    return res;
}
int efficient(int arr[],int n)
{
    for(int i=0;i<n;i++){//we replace all the zeros from -1 than we use the function to use logest subarray with sum 0
        if(arr[i]==0)
           arr[i]=-1;
    }
    int res=0;
     for(int i=0;i<n;i++)
    {
        int cur_sum=0;
        for(int j=i;j<n;j++)
        {
            cur_sum=cur_sum+arr[j];
            if(cur_sum==0)
            {
                res= max(res,j-i+1);
            }
        }
    }
    return res;
}



int main()
{ 
int arr[] = {1, 1, 1, 0, 1,0,1,1,1};
    int n = sizeof(arr)/sizeof(arr[0]);
    cout<<efficient(arr,n);
    
}