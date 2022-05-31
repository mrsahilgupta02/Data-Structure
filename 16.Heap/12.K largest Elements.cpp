#include<bits/stdc++.h>//we have to find k largest elements from a array 
using namespace std; //we can do it in k+nlog(n) time by sorting 

void largestk(int arr[],int n,int k)
{
    priority_queue<int,vector<int>,greater<int>>pq(arr,arr+k);//o(n) time,push k items in pq
    
    for(int i=k+1;i<n;i++)            //(n-k)log(k),see is top less than curr element if yes pop it out and push curr element i pq
    {
        if(arr[i]>pq.top())
        {
            pq.pop();
            pq.push(arr[i]);
        }
    }
    while(pq.empty()==false)      //klog(k)
    {
        cout<<pq.top();
        pq.pop();
    }
}

int main()
{

	int arr[] = { 11, 3, 2, 1, 15, 5, 4, 45, 88, 96, 50, 45 };

	int size = sizeof(arr) / sizeof(arr[0]);

	int k = 3;

	largestk(arr,size,k);

	return 0;
}
