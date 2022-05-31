#include<bits/stdc++.h>
using namespace std;
bool issubarraysum(int arr[],int n,int sum)
{
    for(int i=0;i<n;i++)
    {
        int cur_sum=0;
        for(int j=i;j<n;j++)
        {
            cur_sum=cur_sum+arr[j];
            if(cur_sum==sum)
            {
                return true;
            }
        }
    }
    return false;
}

bool efficient(int arr[],int n,int sum)//this function works on logic that 
{
    unordered_set<int>h;
    int pre_sum=0;
    for(int i=0;i<n;i++)
    {
        pre_sum  = pre_sum + arr[i];
        if(pre_sum==sum) // if pre_sum is req. sum
        return true;
        if(h.find(pre_sum-sum)!=h.end()) // if pre_sum - sum is already present
        return true;                     // it means subarr. from its ind. to curr. pre_sum has sum = reqd. sum
        h.insert(pre_sum);
    }
    return false;
}
int main()
{
    int arr[]={5,3,2,-1};
    cout<<efficient(arr,4,4);

}