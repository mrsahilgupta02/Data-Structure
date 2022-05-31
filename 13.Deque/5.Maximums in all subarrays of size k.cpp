#include<bits/stdc++.h>//we have t find max  element for every k size subarrays 
using namespace std;
void printmaxk(int arr[],int n,int k)  //naive approach
{
    for(int i=0;i<n-k+1;i++)
    {
        int mx=arr[i];
        for(int j=i+1;j<i+k;j++)
        {
            mx=max(arr[j],mx);
        }
        cout<<mx<<" ";
    }
}



/*EFFICIENT METHOD*/

void efficient(int arr[],int n,int k)
{
    deque<int>dq;
    for(int i=0;i<k;i++)                               //FIRST WE  do traversing for k elements
    {
        while(!dq.empty()&& arr[i]>=arr[dq.back()])
        {
            dq.pop_back();
        }
        dq.push_back(i);
    }
    for(int i=k;i<n;i++)
    {
        cout<<arr[dq.front()]<<" ";
        while(!dq.empty() &&dq.front()<=i-k)         //this is for the poping out of value which are not part of current k bound
        {
            dq.pop_front();
        }
        while(!dq.empty()&&arr[i]>=arr[dq.back()])
        {
            dq.pop_back();
        }
        dq.push_back(i);
    }
    cout<<arr[dq.front()]<<" ";
}


int main()
{
    int arr[]={3,9,5,6,11,7};
    printmaxk(arr,6,4);
    return 0;
}