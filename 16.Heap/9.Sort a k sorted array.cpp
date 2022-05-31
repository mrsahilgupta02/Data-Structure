#include<bits/stdc++.h>//k sorted array means an element at index i will be present between the indexes i-k to i+k in sorted array
using namespace std;
void sortk(int arr[],int n,int k)
{
    priority_queue<int,vector<int>,greater<int>>pq;
    for(int i=0;i<=k;i++)//push the elements in minheap till kth element
    {
        pq.push(arr[i]);
    }
    int index=0;
    for(int i=k+1;i<n;i++)  //we push top of pq  one one by one in array and also push elements in pq one by one
    {
        arr[index++]=pq.top();
        pq.pop();
        pq.push(arr[i]);    
    }
    while(pq.empty()==false)//this loopis for the values which got left in heap after all process
    {
        arr[index++]=pq.top();
        pq.pop();
    }
}
void printArray(int arr[], int size) 
{ 
	for (int i = 0; i < size; i++) 
		cout << arr[i] << " "; 
	cout << endl; 
} 
 
int main()
{
    
	int k = 3; 
	int arr[] = { 2, 6, 3, 12, 56, 8 }; 
	int n = sizeof(arr) / sizeof(arr[0]); 
	sortk(arr, n, k); 

	cout << "Following is sorted array" << endl; 
	printArray(arr, n); 

	return 0; 
} 