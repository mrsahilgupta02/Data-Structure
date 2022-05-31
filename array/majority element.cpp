#include<bits/stdc++.h>// in this problem we have to find index of majority element
using namespace std;// majority element is the element which appeares more than n/2 times in the array
                    //here n is length of array
int findmajority(int arr[],int n)   //naive approach
{
	for(int i=0;i<n;i++)
	{
		int count=1;
		for(int j=i+1;j<n;j++)
		{
			if(arr[i]==arr[j])
			count++;
		}
		if(count>n/2)
		return i;
	}
	return -1;
	
}
int efficientfindmajority(int arr[],int n)
{
	int res=0;
	int count =1;
	for(int i=1;i<n;i++)
	{
		if(arr[res]==arr[i])
		count++;
		else
		count--;
		if(count==0)
		{
			res=i;
			count=1;
		}
	}
	count=0;
	for(int i=0;i<n;i++)
	{
		if(arr[res]==arr[i])
		count++;
		
	}
	if(count<n/2)
	{
		res=-1;
	}
	return res;
}
int main()
{
	int A[]={4,2,4,5,2,2,2};
	cout<<efficientfindmajority(A,7);
}
               
