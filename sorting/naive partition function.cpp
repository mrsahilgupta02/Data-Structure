#include<bits/stdc++.h>
using namespace std;
int partition(int arr[],int l,int h,int p)
{
    int temp[h-l+1],index=0;
    for(int i=l;i<=h;i++)
    {
    if(arr[i]<arr[p])
    {
        temp[index]=arr[i];
        index++;
    }
    }
    for(int i=l;i<=h;i++)
    {
        if(arr[i]==arr[p])
        {
            temp[index]=arr[i];
            index++;
        }
    }
    int res=l+index-1;
    for(int i=l;i<=h;i++)
    {
        if(arr[i]>arr[p])
        {
            temp[index]=arr[i];
            index++;
        }
    }
    for(int i=l;i<=h;i++)
    arr[i]=temp[i-l];

    
        return res;
    

    
}
int main()
{
    int A[]={1,3,2,9,4,16};
    cout<<partition(A,0,5,4)<<endl;
    for(int i=0;i<6;i++){
        cout << A[i] << " ";
    }
}