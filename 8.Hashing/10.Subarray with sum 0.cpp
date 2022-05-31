#include<bits/stdc++.h>//we have to find that is there a subarray with sum 0
using namespace std;
bool is0subarray(int arr[],int n)  
{
    for(int i=0;i<n;i++)
    {
        int curr_sum=0;
        for(int j=i;j<n;j++)
        {
            curr_sum = curr_sum + arr[j];
        }
        if(curr_sum==0)
        {
            return true;
        }
    }
    return false;
}
bool is0subarrayefficient(int arr[],int n)//this logic is that if sum ofa[i,j] is 0 than sum of a[0,i-1] and a[0,j] is equal
{
    unordered_set<int>h;//we make an unordered set
    int pre_sum=0;          //initialize presum as 0
    for(int i=0;i<n;i++)
    {
        pre_sum=pre_sum+arr[i];//
        if(h.find(pre_sum)!=h.end())//it means if we find presum in h than we return true
            return true;
        if(pre_sum==0)
        {
            return true;
        }    
        h.insert(pre_sum);//if all above condition not followed than we insert presu in set
    }
    return false;
}

int main()
{
    int arr[]={3,4,3,-1,1};
    cout<<is0subarrayefficient(arr,5);
}