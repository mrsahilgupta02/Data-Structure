#include<bits/stdc++.h> //problem is to find first occurence of x in a sorted array
using namespace std;    //and also index of last occurence
int firstocc(int arr[],int low,int high,int x)
{
    if(low>high)
    return -1;
    int mid=(low+high)/2;
    if(x>arr[mid])
    return firstocc(arr,mid+1,high,x);
    else if(x<arr[mid])
    return firstocc(arr,low,mid-1,x);
    else
    {
        if(mid==0 || arr[mid-1]!=arr[mid]) //if mid is first element than its first
        return mid;                        //or if nu before it is not equal to mid than its obviously first
        else return firstocc(arr,low,mid-1,x);//if nu before it is equal than shift to left half 

    }

} 
int firstocciterative(int arr[],int n,int x)
{
    int low=0;
    int high=n-1;
    while(low<=high)
    {
        int mid=(low+high)/2;
        if(arr[mid]>x)
        high=mid-1;
        else if(arr[mid]<x)
        low=mid+1;
        else
        {
            if(mid==0 || arr[mid-1]!=arr[mid])
            return mid;
            else
            high=mid-1;
        }
    }
    return -1;
} 
int lastocc(int arr[],int low,int high,int x,int n)
{
    if(low>high)
    return -1;
    int mid=(low+high)/2;
    if(x>arr[mid])
    return lastocc(arr,mid+1,high,x,n);
    else if(x<arr[mid])
    return lastocc(arr,low,mid-1,x,n);
    else
    {
        if(mid==n-1 || arr[mid+1]!=arr[mid])
        return mid;
        else return lastocc(arr,mid+1,high,x,n);

    }

} 
int lastocciterative(int arr[],int n,int x)
{
    int low=0;
    int high=n-1;
    while(low<=high)
    {
        int mid=(low+high)/2;
        if(arr[mid]>x)
        high=mid-1;
        else if(arr[mid]<x)
        low=mid+1;
        else
        {
            if(mid==n-1 || arr[mid+1]!=arr[mid])
            return mid;
            else
            low=mid+1;
        }
    }
    return -1;
} 
int countocc(int arr[],int n,int x)
{
    int first=firstocciterative(arr,n,x);
    if(first==-1)
    return 0;
    else 
    return(lastocciterative(arr,n,x)-first+1);
}

int main()
{
    int A[]={10,20,30,40,50,50,50,60};
    //cout<<firstocc(A,0,6,10);
    //cout<<firstocciterative(A,7,50);
   // cout<<lastocc(A,0,7,50,8);
   cout<<countocc(A,8,50);
}

 