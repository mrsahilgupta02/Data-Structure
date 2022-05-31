#include<bits/stdc++.h>
using namespace std;
 void maxHeapify(int arr[],int n,int i)       //MAX HEAPIFY FUNCTON
 {
     int largest=i;
     int left=2*i+1,right=2*i+2;
     if(left<n && arr[left]>arr[largest])
     {
         largest=left;
     }
     if(right<n && arr[right]>arr[largest])
     {
         largest=right;
     }
     if(largest!=i)
     {
         swap(arr[largest],arr[i]);
         maxHeapify(arr,n,largest);
     }
 }

void buildheap(int arr[],int n)   //we first make a builheap functio hich convert normal array into maxheap
{
    for(int i=(n-2)/2;i>=0;i--)
    {
        maxHeapify(arr,n,i);
    }
}

void heapsort(int arr[],int n)
{
    buildheap(arr,n);                 //converted to max heap
    for(int i=n-1;i>=1;i--)           //startted from end to swap with root
    {
        swap(arr[0],arr[i]);
           maxHeapify(arr,i,0);      //then heapify with root by taking size as i (because we have already sorted >i )
    }                                //means we Assume we have deleted the arr[0](whichs new index is i) element after swapping
}

void printArray(int arr[], int n) 
{ 
	for (int i=0; i<n; ++i) 
		cout << arr[i] << " "; 
	cout << "\n"; 
} 


int main() 
{ 
	int arr[] = {12, 11, 13, 5, 6, 7}; 
	int n = sizeof(arr)/sizeof(arr[0]); 

	heapsort(arr, n); 

	cout << "Sorted array is \n"; 
	printArray(arr, n); 
} 
