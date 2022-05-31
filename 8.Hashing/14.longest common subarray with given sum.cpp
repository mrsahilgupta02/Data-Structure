#include<bits/stdc++.h>//we are given 2 arrays  of asame size we have to find londest common subarray with given sum 
using namespace std;

int maxcommon(int a[],int b[],int n)
{

    int res=0;
    for(int i=0;i<n;i++)
    {
        int sum1=0,sum2=0;
        for(int j=i;j<n;j++)
        {
             sum1+=a[j];
             sum2+=b[j];
             if(sum1==sum2)
             {
                 res=max(res,j-i+1);
             }
        }
        
    }
    return res;
}
int efficient(int a[],int b[],int n)//here we make a new array which store differce of both arrays as both the arrays are of same length
{
    int temp[n];
    for(int i=0;i<n;i++)
    {
        temp[i]=a[i]-b[i];
    }

    unordered_map<int,int>m;//then we used the function of longest subarray with o sum
    int pre_sum=0,res=0;
    for(int i=0;i<n;i++)
    {
        pre_sum=pre_sum + temp[i];
        if(pre_sum==0)                //if presum is the req sum
        res=i+1;                        //then res get hike
        if(m.find(pre_sum)==m.end())    //if presu is not present in the map insert it
        {
            m.insert({pre_sum,i});
        }
        if(m.find(pre_sum)!=m.end())//if prsum-sum  is already exist
        {
            res=max(res,i-m[pre_sum]);            //it means subarr. from presum-sum ind. to curr. pre_sum has sum = reqd. sum
        }
    }
    return res;
}



int main()
{
    int a[]={0,1,0,0,0,0};
    int b[]={1,0,1,0,0,1};
    int n=sizeof(a)/sizeof(a[0]);
    cout<<efficient(a,b,n);
}
