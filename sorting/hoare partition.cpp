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
int main()
{
    int A[]={12,9,10,22,43};
    hpartition(A,0,4);
    for(int i=0;i<5;i++)
    {
        cout<<A[i]<<" ";
    }
}