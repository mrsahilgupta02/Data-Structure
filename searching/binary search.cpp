#include<bits/stdc++.h>
using namespace std;
int bsearch(int arr[],int n,int x)
{
    int low=0,high=n-1;
    while(low<=high)
    {
        int mid=(low+high)/2;
        if(arr[mid]==x)
        return mid;
        else if(arr[mid]>x)
        high=mid-1;
        else
        low=mid+1;
    }
    return -1;
}
int main()
{
    int A[]={10,20,30,40,50};
    cout<<bsearch(A,5,50);
}