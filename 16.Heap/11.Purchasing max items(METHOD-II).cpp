#include<bits/stdc++.h>
using namespace std;

int main()
{
    int res=0;
    int sum=18;
    int arr[]={1,12,5,111,555};
    int n=sizeof(arr)/sizeof(arr[0]);
    priority_queue<int,vector<int>,greater<int>>pq(arr,arr+n);
    while(sum>=pq.top())
    {
        int temp=pq.top();
        pq.pop();
        sum=sum-temp;
        res++;
    }
    cout<< res;
}