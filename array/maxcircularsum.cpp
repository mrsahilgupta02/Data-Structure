#include<bits/stdc++.h>//we have to find maximum sum of consecutive numbers in circular subarray.
using namespace std;

int maxcircularsum(int arr[],int n)// naive method
{
	int res=arr[0];
	for(int i=0;i<n;i++)
	{
		int currmax=arr[i];
		int currsum=arr[i];
		for(int j=1;j<n;j++)
		{
			int index=(i+j)%n;
			currsum=currsum +arr[index];
			currmax=max(currmax,currsum  );
		}
		res=max(res,currmax);
	}
	cout<<res;
}
int normalmax(int arr[],int n)// this function is for finding max subarry sum by stating this array a normal array not a circular one
{
	int res=arr[0],maxending=arr[0];
	for(int i=1;i<n;i++)
	{
		maxending=max(arr[i],maxending+arr[i]);
		res=max(res,maxending);
	}
	return res;
}
int efficientmaxcircularsum(int arr[],int n)//efficient idea is// maximum sum =total array sum - minimum  subarray sum
{
	int maxnormal=normalmax(arr,n);
	if(maxnormal<0)// this condition is for the case in which all elements in array are negative.
	cout<<maxnormal;
	int arrsum=0;
	for(int i=0;i<n;i++)
	{
		arrsum +=arr[i];
		arr[i]=-arr[i];
	}
	int maxcircular=arrsum+normalmax(arr,n);
	int X=max(maxnormal,maxcircular);
	cout<<X;
	
}
int main()
{
	int A[]={5,-2,3,4};
	efficientmaxcircularsum(A,4);
	
}

