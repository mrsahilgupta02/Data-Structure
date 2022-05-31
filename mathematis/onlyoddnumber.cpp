#include<iostream>
using namespace std;
int naive()
{
		int arr[]={4,3,4,4,4,5,5};//naive method
	int n=7;
	for(int i=0;i<n;i++)
	{
		int count=0;
		for(int j=0;j<n;j++)
		{
			if(arr[j]==arr[i])
			count++;
		}
		if(count%2!=0)
		cout<<arr[i];
	}
	
}
int efficient(int arr[],int n)
{
	int res=0;
	for(int i=0;i<n;i++)
	{
		res=res^arr[i];
	}
	return res;
	
}
int main()
{
	int arr[]={4,3,4,4,4,5,5};//naive method
	int n=7;
	efficient(arr,n);
	

}
 
