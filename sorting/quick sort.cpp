#include<bits/stdc++.h>
using namespace std;
int hpartition(int arr[],int l,int h)
{
    int pivot=arr[l];
    int i=l-1,j=h-1;
    while(true)
    {
        do{
            i++;
        }while(arr[i]<pivot);
        do{
            j--;
        }while(arr[j]>pivot);
        if(i>=j)
        return j;
        swap(arr[i],arr[j]);
    }
}
void qsort(int arr[],int l,int h)
{
    if(l<h)
    {
        int p=hpartition(arr,l,h);
        qsort(arr,l,p);
        qsort(arr,p+1,h);

    }
}
int main()
{
    int A[]={12,14,2,4,7,42};
    qsort(A,0,5);
    for(int i=0;i<6;i++)
    cout<<A[i];
}