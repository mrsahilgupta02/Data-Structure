#include<bits/stdc++.h>
using namespace std;
int lpartition(int arr[],int l,int h)
{
    int pivot=arr[h];                 //pivot is always at last in lamuto partition
    int i=l-1;
    for(int j=l;j<=h-1;j++)
    {
        if(arr[j]<pivot)
        {
            i++;
            swap(arr[i],arr[j]);
        }
    }
    swap(arr[i+1],arr[h]);
    return (i+1);
}
void qsort(int arr[],int l,int h)
{
    if(l<h)
    {
        int p=lpartition(arr,l,h);
        qsort(arr,l,p-1);
        qsort(arr,p+1,h);
    }
}

int main()
{
    int A[]={19,3,1,2,5,15};
    qsort(A,0,5);
    for(int i=0;i<6;i++)
    cout<<A[i]<<" ";

}