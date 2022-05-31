#include<bits/stdc++.h> // you have given an integer x you have to find k closest elemts for x which are present in  array
using namespace std;

void printkclosest(int arr[],int n,int k,int x)
{
    bool visited[n]={false};
    for(int i=0;i<k;i++)               //this llop will run k tmes and everytime we will find a closest element
    {
         int min_diff=INT_MAX;
        int min_diff_idx;
        
        for(int j=0;j<n;j++)
        {
            if(visited[j]==false && abs(arr[j]-x)<=min_diff)
            {
                min_diff=abs(arr[j]-x);
                min_diff_idx=j;
            }
        }
        cout<<arr[min_diff_idx]<<" ";
        visited[min_diff_idx]=true;
    }

}

void Printkclosest(int arr[],int n,int k,int x)
{
    priority_queue<pair<int,int>>pq;
    for(int i=0;i<k;i++)              //we push diff  and index of first k elements with x,0(klog(k))
    {
        pq.push({abs(arr[i]-x),i});
    }
    for(int i=k;i<n;i++)             //then we check for further elements that diff is less if yes we pop top from pq and inset diff ,index
    {
        int diff=abs(arr[i]-x);
        if(pq.top().first>diff)
        {
            pq.pop();
            pq.push({diff,i});
        }
    }
    for(int i=0;i<k;i++)
    {
        cout<<pq.top().second<<" ";
        pq.pop();
    }
}
int main()
{

	int arr[] = { 10,30,5,40,38,80,70 };

	int size = sizeof(arr) / sizeof(arr[0]);

	int x=35; int k = 3;

	Printkclosest(arr,size,k,x);

	return 0;
}
