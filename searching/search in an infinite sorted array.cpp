#include<bits/stdc++.h>// problem is to search an element in an infinite array
using namespace std;

int bsearch(int arr[],int low,int high,int x)//this recursive code is written yo be used in efficient method
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
int efficientsearch(int arr[],int x)// in thi we will start front i=1 and multiply i by 2 till we find greater value than x
{                                   
    if(arr[0]==x)
    return x;
    int i=1;
    while(arr[i]<x)
    i=i*2;                      //by this we know i and also that i must be lie b/w i/2 and i
    if(arr[i]==x)               //so we can do binary search in between i/2+1 and i-1 for x
    return i;

    return bsearch(arr,i/2+1,i-1,x);


}
int main()
{
    int A[]={1,3,5,6,8,9,11,14};
    cout<<efficientsearch(A,11);
}
