#include<bits/stdc++.h> // leader means te value in array which is largest in all values which are in right to it
using namespace std;
void leader (int arr[],int n)
{
	int currleader=arr[n-1];
	
	cout<<currleader<<" ";
	for(int i=n-2;i>=0;i--)
	{
		if(currleader<arr[i])
		{
			currleader=arr[i];
			cout<<currleader<<" ";
		}
	}
}
int main()
{
	int n=5;
	int arr[]={6,2,11,9,3};
	leader(arr,5);
	
}

