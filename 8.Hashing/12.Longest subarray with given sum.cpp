#include<bits/stdc++.h>//we have to find the length of longest subarray of sum a
using namespace std;
int maxlen(int arr[],int n,int sum)
{
    int res=0;
     for(int i=0;i<n;i++)
    {
        int cur_sum=0;
        for(int j=i;j<n;j++)
        {
            cur_sum=cur_sum+arr[j];
            if(cur_sum==sum)
            {
                res= max(res,j-i+1);
            }
        }
    }
    return res;
}
int efficient(int arr[],int n,int sum)
{
    unordered_map<int,int>m;
    int pre_sum=0,res=0;
    for(int i=0;i<n;i++)
    {
        pre_sum=pre_sum + arr[i];
        if(pre_sum==sum)                //if presum is the req sum
        res=i+1;                        //then res get hike
        if(m.find(pre_sum)==m.end())    //if presu is not present in the map insert it
        {
            m.insert({pre_sum,i});
        }
        if(m.find(pre_sum-sum)!=m.end())//if prsum-sum  is already exist
        {
            res=max(res,i-m[pre_sum-sum]);            //it means subarr. from presum-sum ind. to curr. pre_sum has sum = reqd. sum
        }
    }
    return res;
}
int main()
{
    int arr[]={5,2,3};
    cout<<efficient(arr,3,5);
}