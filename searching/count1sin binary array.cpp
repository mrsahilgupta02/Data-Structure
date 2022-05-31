#include<bits/stdc++.h>//problem is to find nu of 1s in sorted binary array 
using namespace std;
int countones(int arr[],int n)
{
    int low=0;
    int high=n-1;
    while(low<=high)
    {
        int mid=(low+high)/2;
        if(arr[mid]==0)// we do this as we want 0 and ofcourse array is sorted
        low=mid+1;
        else
        {
             if(mid==0||arr[mid-1]!=arr[mid])//
             return (n-mid);//occurence = total nu of elements in array - first occurence of 1
             else high=mid-1;
        }
    }
    return 0;
}
int main()
{
    int A[]={0,0,1,1,1,1};
    cout<<countones(A,6);
}