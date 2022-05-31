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
    int main()
    {
        int A[]={2,5,12,9,19,6};
        cout<<lpartition(A,0,5)<<endl;
        for(int i=0;i<6;i++)
        {
           cout<< A[i]<<" ";
        }
    }
