#include<bits/stdc++.h> 
using namespace std;
void rotate(int arr[],int n)//program to left rotate the array by 1.
{
	int temp=arr[0];
	for(int i=1;i<n;i++)
	{
		arr[i-1]=arr[i];
	}
	arr[n-1]=temp;
}
void rotated(int arr[],int n,int d) //naive program to left rotate the array by d position
{
	for(int i=0;i<d;i++)
	rotate(arr,n);
}
void efficientrotated(int arr[],int n,int d) // efficient program to left rotate the array by d position
{
	int temp[d];
	for(int i=0;i<d;i++)
	temp[i]=arr[i];
	for(int i=d;i<n;i++)
	arr[i-d]=arr[i];
	for(int i=0;i<d;i++)
	arr[n-d+i]=temp[i];
}
void reverse(int arr[],int low ,int high)
{
	while(low<high)
	{
		swap(arr[low],arr[high]);
		low++;
		high--;
	}
}
void rotated1(int arr[],int n,int d) //reversal algorithm
{
	reverse(arr,0,d-1);
	reverse(arr,d,n-1);
	reverse(arr,0,n-1);
}

int main()
{
	int A[]={1,3,5,7,9};
	rotated1(A,5,5);
	for(int x=0;x<5;x++)
	{
		cout<<A[x];
	}
}
