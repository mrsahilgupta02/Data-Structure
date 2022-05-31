#include<bits/stdc++.h>
using namespace std;
int bsearch(int arr[],int low,int high,int x)
{
    if(low>high) return -1;
    int mid=(low+high)/2;
    if(arr[mid]==x)
    return mid;
    else if(arr[mid]>x)
    return bsearch(arr,low,mid-1,x);
    else
    return bsearch(arr,mid+1,high,x);
}    
int main()
{
    int A[]={10,20,30,40,50};
    cout<<bsearch(A,0,4,50);
}
