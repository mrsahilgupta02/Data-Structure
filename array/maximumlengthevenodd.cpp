#include<bits/stdc++.h>
using namespace std;

int maxevenodd(int arr[],int n)//naive approach to finf maximum length of consecutive even odd numbers.
{
	int res=1;
	for(int i=0;i<n;i++)
	{
		int curr=1;
		for(int j=i+1;j<n;j++)
		{
			if((arr[j]%2==0 && arr[j-1]%2!=0) || arr[j]%2!=0 && arr[j-1]%2==0)
			curr++;
			else 
			break;
		}
		res=max(res,curr);
	}
	cout<<res;
}
int  efficientmaxevenodd(int arr[],int n)
{
	int res=1;
	int curr=1;
	for(int i=0;i<n;i++)
	{
		if((arr[i]%2==0 && arr[i-1]%2!=0) || arr[i]%2!=0 && arr[i-1]%2==0)
		{
			curr++;
			res=max(res,curr);
		}
		else
		curr=1;
	}
	cout<<res;
}
int main()
{
	int A[]={5,10,20,6,3,8};
	efficientmaxevenodd(A,6);
}
