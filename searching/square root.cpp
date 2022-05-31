#include<bits/stdc++.h>// problem is to find square root of the value till floor value
using namespace std;
int sqrootfloor(int x)//naive approach
{
    int i=1;
    while(i*i<=x)
    i++;
    return (i-1);
}
int efficientsqroot(int x)
{
    int low=1;
    int high=x;
    int ans=-1;//initialize for base case
    while(low<=high)
    {
        int mid=(low+high)/2;//we use mid
        int msq=mid*mid;
        if(msq==x)//as  we take x/2 ka square if it is greater than x we will shift to left half and viceversa
        return mid;
        else if(msq>x)
        high=mid-1;
        else
        {
               low=mid+1;
               ans=mid;
        }
    }
    return ans;
}
int main()
{
    cout<<efficientsqroot(24);
}