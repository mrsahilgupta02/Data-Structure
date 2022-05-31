#include<bits/stdc++.h>
using namespace std;
void selectsort(int arr[],int n)
{
    int temp[n];
    for(int i=0;i<n;i++)
    {
        int min_ind=0;
        for(int j=1;j<n;j++)
        {
            if(arr[j]<arr[min_ind])
                 min_ind=j;
        }
        temp[i]=arr[min_ind];
        arr[min_ind]=INT_MAX;
    }
    for(int i=0;i<n;i++){
        arr[i]=temp[i];
    }
}
int main()
{
     int arr[]={3,1,7,4};
     selectsort(arr,4);
     for(int i=0;i<4;i++)
    {
        cout<< arr[i] << " ";
    }
    return 0;
}