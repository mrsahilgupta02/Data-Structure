#include<bits/stdc++.h>
using namespace std;
void merge(int a[],int l,int m,int h) // merge function from merge sort
{                                     // if elements in array a are sorted from low to mid and from mid+1 to high then this function merge them sortedly
    int n1=m-l+1;
    int n2=h-m;
    int left[n1],right[n2];
    for(int i=0;i<n1;i++)
    { left[i]=a[l+i];}
    for(int j=0;j<n2;j++)
    {right[j]=a[m+j+1];}
    int i=0,j=0,k=l;
    while(i<n1 && j<n2)
    {
        if(left[i]<=right[j])
        {
            a[k]=left[i];i++;k++;
        }
        else{
            a[k]=right[j];k++;j++;
        }
    }
    while(i<n1){a[k]=left[i];i++;k++;}
    while(j<n2){ a[k]=right[j];j++;k++;}
}
void mergesort(int arr[],int l,int r)
{
    if(r>l)
    {
    int m=l+(r-l)/2;
    mergesort(arr,l,m);
    mergesort(arr,m+1,r);
    merge(arr,l,m,r);
    }
}
int main()
{
    int arr[]={10,5,30,15,7};
    int l=0,r=4;
    mergesort(arr,l,r);
    for(int x : arr)
    cout<<x<<" ";
}