#include<bits/stdc++.h>
using namespace std;
void freq(int arr[],int n)
{
	int count=1;
	for(int i=0;i<n-1;i++)
	{
		if(arr[i+1]==arr[i])
		{
			count++;
			
			
		}
		
		else
		count=1;
		
		cout<<arr[i+1]<<" "<<count<<" ";
	}
	
}
int main()
{
    int	arr[]={10,10,30,40};
	freq(arr,4);
}
